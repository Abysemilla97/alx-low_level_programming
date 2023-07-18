#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - defining a new type.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the name of the dog's owner.
 * Return: nothing 0.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
