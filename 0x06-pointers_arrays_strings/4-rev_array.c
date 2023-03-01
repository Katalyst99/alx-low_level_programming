#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers,
 * where n is the number of elements of the array.
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return:- no return
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
