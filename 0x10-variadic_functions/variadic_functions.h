#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dtype - A struct type dtype
 * @type: The type
 * @f: Function pointer to a function that prints
 */
typedef struct dtype
{
	char *type;
	void (*f)(va_list ap);
} dtype_t;

#endif
