#include <stdio.h>

/**
 * main - print it's name.
 * @argc: this counts parameter.
 * @argv: this is the vector, the array list.
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
