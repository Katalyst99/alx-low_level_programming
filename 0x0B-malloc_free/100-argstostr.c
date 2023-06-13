#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The number of command line arguments
 * @av: An array containing the program command line arguments
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i = 0, size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			size++;
		}
	}
	size += ac;

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[i++] = av[a][b];
		}
		s[i++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
