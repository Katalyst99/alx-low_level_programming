#include "main.h"

int actual_sqrt_recursion(int n, int y);
int _sqrt_recursion(int n);

/**
 * actual_sqrt_recursion - recursion used to find natural square root of number
 * @n: The number
 * @y: The iterator
 * Return: The natural square root of a number
 */
int actual_sqrt_recursion(int n, int y)
{
	if ((y * y) > n)
	{
		return (-1);
	}
	if ((y * y) == n)
		return (y);

	return (actual_sqrt_recursion(n, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number
 * Return: The natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
		return (1);

	return (actual_sqrt_recursion(n, y));
}
