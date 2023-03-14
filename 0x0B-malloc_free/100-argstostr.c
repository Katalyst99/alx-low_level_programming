#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The number of arguments passed
 * @av: Array of pointers to the arguments
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, c = 0, d = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			c++;
		}
	}
	c += ac;

	s = malloc(sizeof(char) * c + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[d++] = av[a][b];
		}
		s[d++] = '\n';
	}
	s[c] = '\0';
	return (s);
}
