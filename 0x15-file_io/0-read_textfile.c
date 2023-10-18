#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - function that reads and write a textfile
 * @filename: name of the file
 * @letters: letters to be read and written
 * Description: program uses the function read_textfile()
 * Return: the actual number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t read_letters;
ssize_t written_letters;


if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

read_letters = read(fd, buffer, letters);
if (read_letters == -1)
{
close(fd);
free(buffer);
return (0);
}

written_letters = write(STDOUT_FILENO, buffer, read_letters);
if (written_letters == -1 || written_letters != read_letters)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);

return (read_letters);
}
