#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - check the code
 * @b: the size of memory to allocate
 * Description: 'Program uses *malloc_checked function'
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(98);
}
return (ptr);
}
