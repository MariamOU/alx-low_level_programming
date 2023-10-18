#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Description: program uses the function append_text_to_file()
 * Return: the actual number of letters or 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t written_letters;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

written_letters = write(fd, text_content, strlen(text_content));
if (written_letters == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
