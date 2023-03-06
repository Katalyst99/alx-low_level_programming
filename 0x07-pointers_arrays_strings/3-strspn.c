#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The initial segment.
 * @accept: The bytes from accept
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
			{
				n++;
				break;
			}
			else if (accept[c + 1] == '\0')
				return (i);
		}
	}
	return (i);
}
