#include<stdio.h>
#include "dog.h"
#include<string.h>
/**
 * init_dog - the function
 * @d: the structure name
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description:
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL || name == NULL || owner == NULL)
{
return;
}
strncpy(d->name, name, sizeof(d->name) - 1);
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
}
