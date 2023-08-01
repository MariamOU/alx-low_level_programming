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
* return: New dog or NULL
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


    strcpy(NewDog->name, name);
    strcpy(NewDog->owner, owner);

    NewDog->age = age;

    return (NewDog);
}
