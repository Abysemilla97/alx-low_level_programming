#include <stdio.h>


/**
 *main - print all combs in 3 digits
 *Return: always 0
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 48; x <= 55; x++)
	{
		for (y = x + 1; y <= 56; y++)
		{
			for (z = y + 1; z <= 57; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < 55 || y < 56 || z < 57)
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
