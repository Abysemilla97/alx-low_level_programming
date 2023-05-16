#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program that adds positive numbers.
 * @argc: this counts parameters.
 * @argv: this is vector, array list.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j, k, num;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] > '9' || argv[i][j] < '0')
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
