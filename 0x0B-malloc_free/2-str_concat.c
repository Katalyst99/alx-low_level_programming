#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 * else NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *cstr;
	int i, j = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	cstr = malloc(sizeof(char) * len);

	if (cstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		cstr[j++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		cstr[j++] = s2[i];
	}
	return (cstr);
}

