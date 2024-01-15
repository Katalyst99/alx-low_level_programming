#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @n: The bytes to be filled.
 * @s: The memory area.
 * @b: The constant byte.
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
