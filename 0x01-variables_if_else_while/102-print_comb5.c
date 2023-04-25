#include <stdio.h>

/**
 *main - print all combs in 2 2-digits
 *Return: always 0
 */
int main(void)
{
	int x;
	int z;

	for (x = 0; x < 100; x++)
	{
		for (z = 0; z < 100; z++)
		{
			if (x < z)
			{
				putchar((x / 10) + 48);
				putchar((z % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (x != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

