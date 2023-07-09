#include"main.h"
#include<stdlib.h>
/**
 * main - a program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: number of parameters.
 * @argv: an array of listed string.
 * Return: success 0 (zero).
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int ncent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	ncent = atoi(argv[1]);
	while (ncent > 0)
	{
		coins++;
		if ((ncent - 25) >= 0)
		{
			ncent -= 25;
			continue;
		}
		if ((ncent - 10) >= 0)
		{
			ncent -= 10;
			continue;
		}
		if ((ncent - 5) >= 0)
		{
			ncent -= 5;
			continue;
		}
		if ((ncent - 2) >= 0)
		{
			ncent -= 2;
			continue;
		}
		ncent--;
	}
	printf("%d\n", coins);
	return (0);
}
