#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The parameter
 * Return: if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sumall;
	va_list args;

	va_start(args, n);

	sumall = 0;
	for (i = 0; i < n; i++)
	{
		sumall += va_arg(args, int);
	}
	va_end(args);
	return (sumall);
}
