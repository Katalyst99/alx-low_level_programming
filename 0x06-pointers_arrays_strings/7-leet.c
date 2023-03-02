#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: The string
 * Return: pointer to the destination.
 */
char *leet(char *s)
{
	int i, c;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if (s[i] == letters[c])
			{
				s[i] = numbers[c];
			}
		}
	}
	return (s);
}
