#ifndef DOG_H
#define DOG_H

/**
* struct dog - The name of the structure
* @name: first element of the structure
* @age: second element of the structure
* @owner: third element of the structure
*/

struct dog
{
char *name;
float age;
char *owner;

};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif /* DOG_H */
