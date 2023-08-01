#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function creates an array for integers
 * @min: min value
 * @max: max value
 * Description: 'Program uses *array_range'
 * Return: a pointer to the created array
 */

int *array_range(int min, int max)
{
int size;
int *array;
int i;

if (min > max)
{
return (NULL);
}

size = max - min + 1;
array = (int *)malloc(size *sizeof(int));

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = min + i;
}

return (array);
}
