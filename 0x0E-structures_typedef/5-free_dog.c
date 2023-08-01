#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
#include "dog.h"
/**
* free_dog - creates a new dog
* @d: the name of the structure
* Description: 'Program uses the function *free_dog'
* return: nothing
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
