#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - check the code
 * @nmemb: the number of elements of an array
 * @size: the size of each element
 * Description: 'Program uses *_calloc function'
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);

return (ptr);
}
