#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0, c;

	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}
	if (len % 2 == 1)
		c = len / 2;
	else
		c = (len - 1) / 2;

	for (c++; c < len; c++)
		_putchar(str[c]);
	_putchar('\n');
}
