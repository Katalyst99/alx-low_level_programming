#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: The string.
 * Return: pointer to destination.
 */
char *rot13(char *s)
{
	int i, c;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; c < 52; c++)
		{
			if (s[i] == alp[c])
			{
				s[i] = rot13[c];
				break;
			}
		}
	}
	return (s);
}
