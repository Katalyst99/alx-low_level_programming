#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string
 * Return: NULL if insufficient memory was available,
 * else returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		size++;
	}

	dupstr = malloc(sizeof(char) * (size + 1));

	if (dupstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		dupstr[i] = str[i];
	}
	dupstr[size] = '\0';
	return (dupstr);
}
