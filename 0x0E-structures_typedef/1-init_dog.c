#include "dog.h"
/**
* init_dog - Initializes the structure
* @d: Dog structure
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
* return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
