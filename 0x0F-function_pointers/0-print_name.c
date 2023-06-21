#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: The name
 * @f: The function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		(*f)(name);
	}
}
