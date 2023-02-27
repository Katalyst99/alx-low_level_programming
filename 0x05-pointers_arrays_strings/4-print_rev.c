#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}
	for (len--; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
