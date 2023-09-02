#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of strings
 * Description: 'Program uses main function'
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
else
{
printf("Program name not available \n");
}

return (0);
}
