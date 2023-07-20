#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - the function pointer
 * @array: the array array
 * @size: the number of elements in the array
 * @cmp: pointer to function
 * Description: 'Program uses int_index'
 * Return: an int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0)
{
return (-1);
}
else
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
}
