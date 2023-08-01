#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *argstostr - function reallocates a memory block using malloc and free
 * @ac: number of arguments passed to the function
 * @av: arguments passed to the function
 * Description: 'Program uses *argstostr'
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
int total_length;
int i;
char *concat;
int position;

if (ac == 0 || av == NULL)
{
return (NULL);
}

total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}

concat = (char *)malloc(total_length *sizeof(char));
if (concat == NULL)
{
return (NULL);
}

position = 0;
for (i = 0; i < ac; i++)
{
strcpy(concat + position, av[i]);
position += strlen(av[i]);
concat[position++] = '\n';
}
concat[position - 1] = '\0';
return (concat);
}
