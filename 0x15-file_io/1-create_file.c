#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - function that reads and write a textfile
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Description: program uses the function create_file()
 * Return: the actual number of letters or 0
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t written_letters;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
written_letters = write(fd, text_content, strlen(text_content));
if (written_letters == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
