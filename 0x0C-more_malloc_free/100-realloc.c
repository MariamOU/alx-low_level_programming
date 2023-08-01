#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function reallocates a memory block using malloc and free
 * @ptr:a pointer to the memory previously allocated
 * @old_size: the old size
 * @new_size: the new size
 * Description: 'Program uses *_realloc'
 * Return: a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int copy_size;
void *new_ptr;

if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
{
return (NULL);
}

copy_size = old_size < new_size ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);

free(ptr);

return (new_ptr);
}
