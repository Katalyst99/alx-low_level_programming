#include "main.h"
int _strlen_recursion(char *s);
int check_pdrome(char *s, int len, int i);

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = n + 1;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}

/**
 * check_pdrome - checks to see if string is palindrome
 * @s: The string to be checked
 * @len: The length
 * @i: The index
 * Return: If palindrome 1, if not zero.
 */
int check_pdrome(char *s, int len, int i)
{
	if (s[i] != s[len - i])
	{
		return (0);
	}
	else if (i == len)
	{
		return (1);
	}
	else
	{
		return (check_pdrome(s, len, i + 1));
	}
}

/**
 * is_palindrome - validates if a string is a palindrome
 * @s: The string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (!(*s))
	{
		return (1);
	}
	else
	{
		return (check_pdrome(s, _strlen_recursion(s) - 1, 0));
	}
}
