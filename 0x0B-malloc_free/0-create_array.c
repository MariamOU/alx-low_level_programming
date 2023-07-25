#include <stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * *create_array - the entry function
 * @size: the variable dest
 * @c: the second variable src
 * Description: 'Program uses printf'
 * Return: a string
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
