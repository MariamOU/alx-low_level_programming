#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - check the code
 * @min: the min value
 * @max: the max value
 * Description: 'Program uses *array_range function'
 * Return: pointer
 */
int *array_range(int min, int max)
{
int i;
int *result;

if (min > max)
{
return (NULL);
}

result = (int *)malloc((max - min + 1) * sizeof(int));

if (result == NULL)
{
return (NULL);
}

for (i = min; i <= max; i++)
{
result[i - min] = i;
}

return (result);
}
