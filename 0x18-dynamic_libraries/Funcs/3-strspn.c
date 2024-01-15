#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The initial segment.
 * @accept: The bytes from accept
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{

	int i, c, bool;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool = 1;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[i] == accept[c])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
