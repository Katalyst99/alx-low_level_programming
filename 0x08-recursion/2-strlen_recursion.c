#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = n + 1;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
