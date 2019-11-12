#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments
 * Return: sucess 0
 */
int main(int argc, char *argv[])
{
int fo, fo2, fw;
ssize_t fr = 1024;
char buf[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97); }
fo = open(argv[1], O_RDONLY);
if (fo == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
fo2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (fo2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't fwrite to %s\n", argv[2]);
exit(99);
}
while (fr == 1024)
{
fr = read(fo, buf, 1024);
if (fr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
fw = write(fo2, buf, fr);
if (fw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't fwrite to %s\n", argv[2]);
exit(99); }}
if (close(fo) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fo %d\n", fo);
exit(100); }
if (close(fo2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fo %d\n", fo2);
exit(100); }
return (0);
}
