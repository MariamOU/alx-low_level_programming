#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - the function
* @filename: the file name
* @letters: number of letters
* Description: program uses the function read_textfile
* Return: 0 or the total readed bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char buffer[BUFFER_SIZE];
size_t total_read = 0;
ssize_t readed_bytes;
ssize_t written_bytes;
ssize_t to_be_written_bytes;


if (filename == NULL)
return (0);

FILE *file = fopen(filename, "r");
if (file == NULL)
return (0);

while ((readed_bytes = fread(buffer, 1, sizeof(buffer), file)) > 0 && total_read < letters)
{
to_be_written_bytes = readed_bytes;

if (total_read + readed_bytes > letters)
{
to_be_written_bytes = letters - total_read;
}

written_bytes = write(STDOUT_FILENO, buffer, to_be_written_bytes);
if (written_bytes < 0 || written_bytes != to_be_written_bytes)
{
fclose(file);
return (0);
}

total_read += readed_bytes;
}

fclose(file);
return (total_read);
}
