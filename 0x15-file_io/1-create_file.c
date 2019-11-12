#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int fo, fw, i = 0;
char *buf;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
fo = open(filename, O_CREAT, 0600);
if (fo == -1)
return (-1);
return (1);
}
for (i = 0; text_content[i] != '\0'; i++)
;
buf = malloc(i * sizeof(char));
if (buf == NULL)
return (-1);
fo = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fo == -1)
return (-1);
fw = write(fo, text_content, i);
if (fw == -1)
return (-1);
close(fo);
free(buf);
return (1);
}
