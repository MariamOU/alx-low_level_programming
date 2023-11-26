#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
/**
* create_file - The function that creates a file
* @filename: the name of the file
* @text_content: a string to write to the file
* Description: Program uses the function create_file
* Return: 1 on sucess, -1 on failure or if text_content is NULL
*/
int create_file(const char *filename, char *text_content)
{
int fd;
size_t text_length;
ssize_t written_bytes;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
perror("Error creating file");
return (-1);
}

if (text_content != NULL)
{
text_length = strlen(text_content);
written_bytes = write(fd, text_content, text_length);
if (written_bytes == -1)
{
perror("Error writing to file");
close(fd);
return (-1);
}
}

close(fd);
return (1);
}


