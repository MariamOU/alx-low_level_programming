#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * free_dog - The function
 * @d: The structure name
 * Description: Uses free_dog
 * Return:
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
