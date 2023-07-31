#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function to allocate memory
 * @b: the memory size
 * Description: 'Program uses *malloc_checked'
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
