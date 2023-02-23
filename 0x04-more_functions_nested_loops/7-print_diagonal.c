#include "main.h"

/**
 * print_diagonal - prints a diagonal line, Using n character.
 * @n: the number of \ to be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, l;

	for (i = 0; i < n; i++)
	{
		for (l = 0; l < n; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
