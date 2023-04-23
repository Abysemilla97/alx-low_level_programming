#include <stdio.h>
/**
 *main - print all possible combos of two digits
 *Return: always 0
 */
int main(void)
{
	int n;
	int w;

	for (n = 48; n <= 56; n++)
	{
	for (w = 49; w <= 57; w++)
	{
	if (w < n)
	{
		putchar(n);
		putchar(w);
	}
	if (n != 56 || w != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
