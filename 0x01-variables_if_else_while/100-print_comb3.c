#include <stdio.h>
/**
 *main - print all possible combos of two digits
 *Return: always 0
 */
int main(void)
{
	int n;
	int w;

	for (n = 0; n <= 10; n++)
	{
	for (w = 10; w <= 10; w++)
	{
		putchar(n + '0');
		putchar(n + '0');
	if (n != 9 || w != 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
