#include "main.h"

/**
 * *_strcpy - program copies the string
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; k < i; k++)
	{
		dest[k] = src[k];
	}
	dest[i] = '\0';
	return (dest);
}
