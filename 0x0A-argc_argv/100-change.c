#include <stdio.h>
#include "main.h"

/**
 * main -  prints the minimum number of coins to make change for an amount.
 * @argc: The count/number of the arguments supplied to the program
 * @argv: An array of pointers to the strings which are those arguments
 * Return: 1 if the number of arguments passed to your program is not,
 * exactly one.
 */
int main(int argc, char *argv[])
{
	int cents, change, i;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	change = 0;

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			change++;
		}
	}
	printf("%i\n", change);
	return (0);
}
