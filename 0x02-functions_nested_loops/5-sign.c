#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * @n: the character that is checked
 * Return: 1 for n is positive, 0 for n is zero and -1 for n is negative
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	_putchar('\n');
}
