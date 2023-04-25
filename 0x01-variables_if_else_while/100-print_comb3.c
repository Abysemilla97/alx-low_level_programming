#include <stdio.h>
/**
 *main - print all possible combos of two digits
 *Return: always 0
 */
int main(void)
{
	int n;
	int w;

	for (n = 0; n <= 8; n++)
	{
		for (w = n + 1; w <= 9; w++)
		{
			putchar('0' + n);
			putchar('0' + w);
			if (n < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
