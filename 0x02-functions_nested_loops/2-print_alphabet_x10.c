#include "main.h"

/**
 * print_alphabet_x10 - function prints ten times the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	int t = 0, c;

	while (t < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		t++;

	}






}
