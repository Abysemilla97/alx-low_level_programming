#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplying  two positive numbers.
 * @argc: the n arguments.
 * @argv: the arrays of args.
 *
 * Return: the int.
 */
int main(int argc, char *argv[])
{
	int m, j;
	unsigned long mult;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (m = 1; m < argc; m++)
	{
	for (j = 0; argv[m][j] != '\0'; j++)
	{
	if (argv[m][j] > 57 || argv[m][j] < 48)
		{
			printf("Error\n");
			exit(98);
		}
	}
	}
	mult = atoi(argv[1]) * atol(argv[2]);
	printf("%lu\n", mult);

	return (0);
}
