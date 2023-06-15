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
	unsigned int len, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len = 0; s1[len]; len++)
		;

	for (len2 = 0; s2[len]; len2++)
		;

	if (n > len2)
		cstr = malloc(sizeof(char) * (len + len2 + 1));
	else
		cstr = malloc(sizeof(char) * (len + n + 1));

	if (cstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cstr[i] = s1[i];

	for (j = 0; j < n && j < len2; j++, i++)
		cstr[i] = s2[i];

	cstr[i] = '\0';
	return (cstr);
}
