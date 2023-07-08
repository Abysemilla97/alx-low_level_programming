#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments or parameters.
 * @argv: an array of listed string.
 * Return: success 0 (zero).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
