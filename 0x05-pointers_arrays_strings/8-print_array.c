#include "main.h"

/**
 * print_array - prints n elements of an array of integers, and a new line.
 * @a: The array.
 * @n: The n elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%i, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%i", a[n - 1]);
		}
		printf("\n");
}
