#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
