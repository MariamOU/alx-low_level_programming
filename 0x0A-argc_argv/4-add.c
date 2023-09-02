#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of strings
 * Description: 'Program uses main function'
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int i;
int number;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
number = atoi(argv[i]);

if (number >= 0)
{
sum += number;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
