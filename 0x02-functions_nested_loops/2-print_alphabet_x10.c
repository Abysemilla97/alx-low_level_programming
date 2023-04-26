#include "main.h"
/**
 *main - prints 10 times the alphabet in lowercase
 *Return: always 0
 */
 void print_alphabet_x10(void)
{
	int e;
	int r;

	for (r = 1; e <= 10; e++)
	{
		for (r = 97; r <= 122; r++)
		{
			_putchar(e);
		}
		_putchar ('\n');
	}
}
