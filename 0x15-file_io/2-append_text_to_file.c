#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include "main.h"

/**
* append_text_to_file - The function that appends a file
* @filename: the name of the file
* @text_content: a string to write to the file
* Description: Program uses the function create_file
* Return: 1 on sucess, -1 on failure or if text_content is NULL
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
size_t text_length;
ssize_t written_bytes;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
perror("Error opening file");
return (-1);
}

if (text_content != NULL)
{
text_length = strlen(text_content);
written_bytes = write(fd, text_content, text_length);
if (written_bytes == -1)
{
perror("Error appending to file");
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
