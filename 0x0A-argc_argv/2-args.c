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
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
