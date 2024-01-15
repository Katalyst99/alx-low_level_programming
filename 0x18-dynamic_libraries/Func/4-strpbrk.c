#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string
 * @accept: The second string.
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
				return (s + i);
		}
	}
	return ('\0');
}
