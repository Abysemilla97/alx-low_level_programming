#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - printing the opcodes of this program.
 * @a: the address of main.
 * @n: the numb of bytes.
 *
 * Return: nothing.
 */
void print_opcodes(char *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%.2hhx", a[m]);
		if (m < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function.
 * @argc: numb of arguments passed.
 * @argv: array of pointers to arguments.
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
