#include <stdio.h>
/**
 *main - print the alphabets in lowercase, and then in uppercase
 *Return: always 0
 */
int main(void)
{
	int n = 97;
	int q = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (q <= 90)
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
