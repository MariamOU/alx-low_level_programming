#include<stdio.h>
#include<stddef.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* @d: Dog structure
* return: nothing
*/

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else if (d != NULL)
{
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
printf("Age: %.2f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
}
