#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: An array of elements
 * @size: The bytes
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	a = mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		a[i] = 0;
	}
	return (mem);
}
