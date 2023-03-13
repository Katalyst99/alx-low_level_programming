#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string
 * Return: pointer to the duplicated string if successful and,
 * NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dstr;

	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	dstr = malloc(sizeof(char) * (len + 1));

	if (dstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		dstr[i] = str[i];
	}
	dstr[len] = '\0';
	return (dstr);
}
