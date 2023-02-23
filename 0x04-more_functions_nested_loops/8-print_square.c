#include "main.h"

/**
 * print_square - prints a square, followed by a new line, using # character.
 * @size: The size of square
 * Return: Always 0
 */
void print_square(int size)
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
