#include "variadic_functions.h"

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(ap);
}
