#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination
 * @src: The source
 * @n: The bytes
 * Return:a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
