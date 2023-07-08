#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - a function that copies the string pointer.
 * @dest: the destination.
 * @src: the source.
 * Return: the string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] =  src[x];
	}
	dest[l] = '\0';
	return (dest);
}
