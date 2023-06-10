#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @src: The source
 * @dest: The destination
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
