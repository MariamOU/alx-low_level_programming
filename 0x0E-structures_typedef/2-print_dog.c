#include<stdio.h>
#include<stdlib.h>
#include "dog.h"
/**
 * print_dog - The function
 * @d: The structure name
 * Description: Uses print_dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
