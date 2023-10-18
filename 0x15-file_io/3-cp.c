#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024


/**
 * exit_error - function that appends text at the end of a file
 * @code: the exit status code of the program
 * @error_message: a string message that describes the error
 * Description: program uses the function exit_error()
 * Return: nothing
 */

void exit_error(int code, const char *error_message)
{
dprintf(STDERR_FILENO, "%s\n", error_message);
exit(code);
}

/**
 * main - main function
 * @argc: counter of args
 * @argv: args
 * Description: program uses the function main()
 * Return: 0 SUCCESS
 */

int main(int argc, char *argv[])
{
char buffer[BUFFER_SIZE];
ssize_t read_letters, written_letters;
char *file_from, *file_to;
int fd_from, fd_to;

file_from = argv[1];
file_to = argv[2];
if (argc != 3)
exit_error(97, "Usage: cp file_from file_to");
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
exit_error(98, "Error: Can't read from file");
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
exit_error(99, "Error: Can't write to file");
}
while ((read_letters = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
written_letters = write(fd_to, buffer, read_letters);
if (written_letters == -1)
{
exit_error(99, "Error: Can't write to file");
}
}
if (read_letters == -1)
{
exit_error(98, "Error: Can't read from file");
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
return (0);
}
