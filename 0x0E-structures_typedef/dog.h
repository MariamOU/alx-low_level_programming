#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure name
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: The structure dog contains 3 different data type members
 */
struct dog
{
char name[100];
float age;
char owner[100];
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
