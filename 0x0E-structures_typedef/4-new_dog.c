#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>
#include "dog.h"
/**
* *new_dog - creates a new dog
* @name: the name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description: 'Program uses the function *new_dog'
* return: A pointer to the created structure
* NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *NewDog = (dog_t *)malloc(sizeof(dog_t));

if (NewDog == NULL)
{
return (NULL);
}
NewDog->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
NewDog->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));


if (NewDog->name == NULL || NewDog->owner == NULL)
{
free(NewDog->name);
free(NewDog->owner);
free(NewDog);
return (NULL);
}

strcpy(NewDog->name, name);
strcpy(NewDog->owner, owner);

NewDog->age = age;

return (NewDog);
}