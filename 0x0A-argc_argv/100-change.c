#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing the minimum number of coins
 * to make change for an amount of money.
 * @argv: the number of arguments.
 * @argc: the array of arguments.
 * Return: return 0, if not 1 showing an error.
 */
int main(int argc, char *argv[])
{
	int numb;
	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);

	while (numb > 0)
	{
	if (numb >= 25)
		numb -= 25;
	else if (numb >= 10)
		numb -= 10;
	else if (numb >= 5)
		numb -= 5;
	else if (numb >= 2)
		numb -= 2;
	else if (numb >= 1)
		numb -= 1;
	coins += 1;
	}

	printf("%d\n", coins);
	return (0);
}

