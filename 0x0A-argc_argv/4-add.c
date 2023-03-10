#include <stdio.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: The count/number of the arguments supplied to the program
 * @argv: An array of pointers to the strings which are those arguments
 * Return: 1 if one of the number contains symbols that are not digits,
 * print Error followed by a new line and 0 if not.
 */
int main(int argc, char *argv[])
{
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%i\n", c);
	return (0);
}
