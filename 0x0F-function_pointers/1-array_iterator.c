#include<stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - The function
 * @array: An array
 * @size:The size of the array
 * @action: A pointer to the function
 * Description: Uses array_iterator
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
