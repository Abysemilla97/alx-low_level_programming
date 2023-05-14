#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: this counts parameter.
 * @argv: this is the vector, array list.
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
