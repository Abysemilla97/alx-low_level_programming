#include <stdio.h>

/**
 *main - print all combs in 2 2-digits
 *Return: always 0
 */
int main(void)
{
	int x;
	int z;

	for (x = 0; x <= 99; x++)
	{
		for (z = x; z <= 99; z++)
		{
			if (x == z)
			continue;
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');
				if (x != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}

