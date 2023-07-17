#include <stdio.h>

/**
 * main - a program that prints the name of the file.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n_file = __FILE__;
	int k = 0;

	while (n_file[k] != '\0')
	{
		putchar(n_file[k]);
		k++;
	}
	putchar('\n');
	return (0);
}
