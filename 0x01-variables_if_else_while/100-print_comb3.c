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
		for (w = n + 1; w <= 57; w++)
		{
			putchar(n);
			putchar(w);
			if (n < w)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
