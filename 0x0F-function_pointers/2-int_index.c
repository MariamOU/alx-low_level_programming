#include<stdio.h>
#include "function_pointers.h"
/**
 * int_index - The function
 * @array: An array
 * @size:The number of elements in the array array
 * @cmp: A pointer to the function used to compare values
 * Description: Uses int_index
 * Return: The index of the first element or -1 if no elem matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
