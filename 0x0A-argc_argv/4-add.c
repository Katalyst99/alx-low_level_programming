#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - A function that checks for a digit from 0 to 9.
 * @c: The character that is used to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - program that adds positive numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 1 f one of the number contains symbols that are not digits,
 * print Error, followed by a new line and 0 if not
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (!_isdigit(argv[n][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
