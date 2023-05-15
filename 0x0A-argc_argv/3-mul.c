#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program that multiples two numbers.
 * @argc: this counts parameters.
 * @argv: this is vector, array list.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	{
		printf("%d\n", result);
	}
	return (0);
}
