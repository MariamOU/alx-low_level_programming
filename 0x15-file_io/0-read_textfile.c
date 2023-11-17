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
char buf[BUFFER_SIZE];
size_t total_r = 0;
ssize_t r_bytes;
ssize_t wr_bytes;
ssize_t to_be_written_bytes;
FILE *file;

if (filename == NULL)
return (0);
file = fopen(filename, "r");
if (file == NULL)
return (0);
while ((r_bytes = fread(buf, 1, sizeof(buf), file)) > 0 && total_r < letters)
{
to_be_written_bytes = r_bytes;
if (total_r + r_bytes > letters)
{
to_be_written_bytes = letters - total_r;
}
wr_bytes = write(STDOUT_FILENO, buf, to_be_written_bytes);
if (wr_bytes < 0 || wr_bytes != to_be_written_bytes)
{
fclose(file);
return (0);
}
total_r += r_bytes;
}
fclose(file);
return (total_r);
}
