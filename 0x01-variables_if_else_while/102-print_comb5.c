#include <stdio.h>

/**
 *main - print all combs in 2 2-digits
 *Return: always 0
 */

int main(void)
{
	int num2;
	int num4;

	for (num2 = 0; num2 <= 99; num2++)
	{
		for (num4 = num2; num4 <= 99; num4++)
		{
			if (num2 == num4)
			{
				putchar('0' + num2 / 10);
				putchar('0' + num2 % 10);
				putchar(' ');
				putchar('0' + num4 / 10);
				putchar('0' + num4 % 10);
				if (num2 < 99)
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
