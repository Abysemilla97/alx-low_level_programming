#include "main.h"

#define ERR_MSG "Error"

/**
 * is_digit - a function that check if strings contains non_digit char.
 * @s: the string to be checked.
 * Return: 0 if non-digits are found, otherwise 1.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - a function that finds the length of a string.
 * @s: the string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * errors - evaluate the errors encountered.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - a function that multiplies two positive numb.
 * @argc: the numbers of parameters
 * @argv: the array of parameters.
 * Return: nothing NULL.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int leng1, leng2, len, num1, num2, p_raise, *f_result, i, l = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	len = leng1 + leng2 + 1;
	f_result = malloc(sizeof(int) * len);
	if (f_result == NULL)
		return (1);
	for (i = 0; i <= leng1 + leng2; i++)
		f_result[i] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		num1 = s1[leng1] - '0';
		p_raise = 0;
		for (leng2 = _strlen(s2) - 1; leng2 >= 0; leng2--)
		{
			num2 = s2[leng2] - '0';
			p_raise += f_result[leng1 + leng2 + 1] + (num1 * num2);
			f_result[leng1 + leng2 + 1] = p_raise % 10;
			p_raise /= 10;
		}
		if (p_raise > 0)
		f_result[leng1 + leng2 + 1] += p_raise;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (f_result[i])
			l = 1;
		if (l)
			_putchar(f_result[i] + '0');
	}
	if (!l)
		_putchar(0);
	_putchar('\n');
	free(f_result);
	return (0);
}
