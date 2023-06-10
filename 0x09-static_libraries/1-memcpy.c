#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: The bytes to be copied
 * @src: The source
 * @dest: The destination
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
