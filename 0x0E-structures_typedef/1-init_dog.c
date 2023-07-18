#include "dog.h"

/**
 * init_dog - function that initialize a variable of type.
 * @d: the dog to be initalized.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 * Return: nothing 0;
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
