#include "main.h"

/**
 * main - a program that prints the
 * number of arguments passed into it.
 * @argc: number of parameters.
 * @argv: an array of listed string.
 * Return: success 0 (zero).
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
