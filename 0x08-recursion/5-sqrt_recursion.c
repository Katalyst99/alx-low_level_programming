#include "main.h"
int _nat_sqrt(int n, int rt);

/**
 * _nat_sqrt - Looks for the natural square root of a number
 * @n: The number
 * @rt: The root
 * Return: The natural square root of the number, and if not -1.
 */
int _nat_sqrt(int n, int rt)
{
	if (rt * rt == n)
	{
		return (rt);
	}

	if (rt == n / 2)
	{
		return (-1);
	}
	else
	{
		return (_nat_sqrt(n, rt + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: The number
 * Return: The natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_nat_sqrt(n, 0));
	}
}
