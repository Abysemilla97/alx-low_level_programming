#include "dog.h"
#include <stdlib.h>

/**
 * str_leng - calculates the length of a string.
 * @str: the string.
 * Return: the length of the string.
 */
int str_leng(char *str)
{
	int leng = 0;

	while (*str++)
	{
		leng++;
	}
	return (leng);
}

/**
 * str_copy - copying the details.
 * @src: the source storing the details to be copied.
 * @dest: the container to store the copied details.
 * Return: the pointer to dest.
 */
char *str_copy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the new dog.
 * @age: the age of the new dog.
 * @owner: it owner's name.
 * Return: the new details.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo->name = malloc(sizeof(char) * (str_leng(name) + 1));
	if (bingo->name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo->owner = malloc(sizeof(char) * (str_leng(owner) + 1));
	if (bingo->owner == NULL)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	bingo->name = str_copy(bingo->name, name);
	bingo->age = age;
	bingo->owner = str_copy(bingo->owner, owner);

	return (bingo);
}
