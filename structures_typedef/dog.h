#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The name of the dog's owner (string).
 *
 * Description: This structure is used to store basic information about a dog,
 * including its name, age, and the name of its owner.
 */


struct dog
{
char *name;
float age;
char *owner;
};


/*
* void init_dog(struct dog *d, char *name, float age, char *owner);
*void print_dog(struct dog *d);
*dog_t *new_dog(char *name, float age, char *owner);
*void free_dog(dog_t *d);
 */
#endif
