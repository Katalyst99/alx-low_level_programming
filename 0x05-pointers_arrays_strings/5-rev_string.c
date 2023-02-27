#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: The string
 * Return Always 0 (Success)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int len = 0;
	int c;

	while (s[len] != '\0')
	len++;
	for (c = 0; c < len; c++)
	{
		len--;
		rev = s[c];
		s[c] = s[len];
		s[len] = rev;
	}
}
