#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The string
 * @s2: The second string
 * @n: The byte
 * Return: pointer pointing to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cstr;
	unsigned int len, len2, i = n;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len = 0; s1[len]; len++)
		i++;

	for (len2 = 0; s2[len]; len2++)
		;

	cstr = malloc(sizeof(char) * (i + 1));

	i = 0;

	if (cstr == NULL)
	{
		return (NULL);
	}

	for (len = 0; s1[len]; len++)
		cstr[i] = s1[len];
	for (len2 = 0; s2[len2] && len2 < n; len2++)
		cstr[i] = s2[len2];

	cstr[i] = '\0';
	return (cstr);
}
