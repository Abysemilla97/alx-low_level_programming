#include <stdio.h>
/**
 *main - print all base 16 numbers in lowercase
 *Return: always 0
 */

int main(void)
{
	int n;
	int r;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (r = 97; r <= 102; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}

