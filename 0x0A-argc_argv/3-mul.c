#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of parameters.
 * @argv: an array of listed string.
 * Return: success 0 (zero).
 */
int main(int argc, char *argv[])
{
	int multiply, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multiply = num1 * num2;

	printf("%d\n", multiply);
	return (0);
}
