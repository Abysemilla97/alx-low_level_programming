#include "dog.h"
#include <stdlib.h>

/**
 * str_leng - calculates the length of a string.
 * @str: the string.
 * Return: the length of the string.
 */
int str_leng(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * str_copy - copying the sring from src.
 * @dest: the container to store the copied details.
 * @src: the source storing the details to be copied.
 * Return: the pointer to dest.
 */
char *str_copy(char *dest, char *src)
{
	int leng, i;

	leng = 0;
	while (src[leng] != '\0')
	{
		leng++;
	}

	for (i = 0; i < leng; i++)
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
 * Return: pointer to the new dog, else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = str_leng(name);
	leng2 = str_leng(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	str_copy(dog->name, name);
	str_copy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
