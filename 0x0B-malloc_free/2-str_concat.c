#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer pointing to a newly allocated space in memory which,
 * contains the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *catstr;

	unsigned int i, j = 0, k = 0;

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
		j++;
	}

	catstr = malloc(sizeof(char) * j);

	if (catstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		catstr[k++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		catstr[k++] = s2[i];
	}
	return (catstr);
}
