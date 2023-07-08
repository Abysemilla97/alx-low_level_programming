#include "main.h"

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: number of parameters.
 * @argv: an array of listed string.
 * Return: nothing 0 (zero).
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
