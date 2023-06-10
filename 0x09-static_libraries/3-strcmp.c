#include "main.h"

/**
 * _strcmp - compares two strings, should work exactly like strcmp
 * @s1: First string
 * @s2: Second string
 * Return: 0 if s1 and s2 are equal, another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
