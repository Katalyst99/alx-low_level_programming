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
	unsigned int i = 0, size = n;

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
		size++;
	}

	cstr = malloc(sizeof(char) * (size + 1));


	if (cstr == NULL)
	{
		return (NULL);
	}

	size = 0;

	for (i = 0; s1[i]; i++)
	{
		cstr[size++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		cstr[size++] = s2[i];
	}
	cstr[size] = '\0';
	return (cstr);
}
