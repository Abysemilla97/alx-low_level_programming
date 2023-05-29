#include "3-calc.h"
#include <stdio.h>

/**
 * main - a function that prints the operator results
 * @argv: an array that points to the arguments.
 * @argc: num of arguments present.
 * Return: always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *op;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
