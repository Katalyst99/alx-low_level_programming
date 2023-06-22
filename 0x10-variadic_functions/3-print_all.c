#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - Prints a character
 * @ap: arguments pointing to the character
 */
void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - Prints an integer
 * @ap: arguments pointing to the integer
 */
void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_f - Prints a float
 * @ap: arguments pointing to the float
 */
void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - Prints a string
 * @ap: arguments pointing to the string
 */
void print_s(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, j = 0;
	char *sep = "";
	va_list ap;
	dtype_t tdata[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format != NULL && format[j])
	{
		i = 0;

		while (tdata[i].type != NULL)
		{
			if (format[j] == *(tdata[i].type))
			{
				printf("%s", sep);
				tdata[i].f(ap);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
