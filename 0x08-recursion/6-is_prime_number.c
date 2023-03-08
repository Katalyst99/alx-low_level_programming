#include "main.h"

int actual_prime(int n, int y);

/**
 * actual_prime - checks if an integer is a prime number.
 * @n: The number
 * @y: The iterator
 * Return: 1 if n is a prime number, 0 if not
 */

int actual_prime(int n, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (n % y == 0 && y > 0)
		return (0);
	return (actual_prime(n, y - 1));
}

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: The number
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
