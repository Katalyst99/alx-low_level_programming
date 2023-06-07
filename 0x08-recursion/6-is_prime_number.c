#include "main.h"
int find_prime(int n, int p);
/**
 * find_prime - checks to see if number is a prime number
 * @n: The number to be checked
 * @p: The possible prime number
 * Return: If prime 1, if not 0
 */
int find_prime(int n, int p)
{
	if (p == n / 2)
	{
		return (1);
	}
	else if (n % p == 0)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, p + 1));
	}
}

/**
 * is_prime_number - function that returns 1,
 * if the input integer is a prime number, else 0
 * @n: The number
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (find_prime(n, 2));
	}
}
