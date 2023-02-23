#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: The size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, z;

	for (i = 0; i < size; i++)
	{
		for (z = 1; z < (size - i); z++)
			_putchar(' ');
		for (z--; z < size; z++)
			_putchar('#');
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
