#include <stdio.h>

/**
 * main - prints all the argument received.
 * @argc: this counts arguments.
 * @argv: this is vector, array list.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
