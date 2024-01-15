#include "main.h"

/**
 * _strstr -  locates a substring.
 * @needle: The substring
 * @haystack: The string
 * Return:pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *j;
	char *i;

	for (; *haystack != '\0'; haystack++)
	{
		j = needle;
		i = haystack;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
