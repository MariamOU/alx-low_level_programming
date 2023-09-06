#include<stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - check the code
 * @size: the array size
 * @c: A specific char
 * Description: 'Program uses *create_array function'
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = NULL;

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
