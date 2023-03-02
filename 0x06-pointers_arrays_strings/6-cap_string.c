#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string
 * Return: The pointer to destination.
 */
char *cap_string(char *str)
{
	int i = 0, c;
	int ws[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + i) >= 'a' && *(str + i) <= 'z')
		*(str + i) = *(str + i) - ' ';
	i++;
	while (*(str + i) != '\0')
	{
		for (c = 0; c < 13; c++)
		{
			if (*(str + i) == ws[c])
			{
				if ((*(str + (i + 1)) >= 'a') && (*(str + (i + 1)) <= 'z'))
					*(str + (i + 1)) = *(str + (i + 1)) - ' ';
			}
		}
		i++;
	}
	return (str);
}
