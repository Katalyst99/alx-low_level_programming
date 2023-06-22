#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of arguments
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);

}
