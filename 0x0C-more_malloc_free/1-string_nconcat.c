#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The amount of bytes
 * Return: A pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcate;
	unsigned int i, l = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		l++;
	}

	nconcate = malloc(sizeof(char) * (l + 1));

	if (nconcate == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
	{
		nconcate[l++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		nconcate[l++] = s2[i];
	}
	nconcate[l] = '\0';
	return (nconcate);
}
