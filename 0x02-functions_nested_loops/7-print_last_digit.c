#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @i: Prints the last digit of a number
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
	int d;

	d = i % 10;
	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
