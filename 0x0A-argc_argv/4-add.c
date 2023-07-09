#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of parameters.
 * @argv: an array of listed string.
 * Return: success 0 (zero).
 */
int main(int argc, char *argv[])
{
	int i, j, adds = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	adds += atoi(argv[i]);
	}
	printf("%d\n", adds);
	return (0);
}
