#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - the function pointer
 * @array: the array
 * @size: size of the array
 * @action: pointer to function
 * Description: 'Program uses array_iterator'
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
