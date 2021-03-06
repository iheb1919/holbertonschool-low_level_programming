#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: string to appends in the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

int fo, fw, i;
char *buf;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
for (i = 0; text_content[i] != '\0'; i++)
;
buf = malloc(i * sizeof(char));
if (buf == NULL)
return (-1);
fo = open(filename, O_RDWR | O_APPEND);
if (fo == -1)
return (-1);
fw = write(fo, text_content, i);
if (fw == -1)
return (-1);
close(fo);
free(buf);
return (1);
}
