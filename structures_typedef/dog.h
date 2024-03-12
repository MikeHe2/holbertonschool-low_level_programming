#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Hola
 *
 * @name: Name of dog.
 * @age: Age of the dog.
 * @owner: Name of the owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

/*This are the prototypes of the proect.*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
