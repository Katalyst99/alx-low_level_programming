#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: The number of elements of array
 * @size: The size of bytes per element
 * Return: Pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	p = ptr;

	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = 0;
	}
	return (ptr);
}
