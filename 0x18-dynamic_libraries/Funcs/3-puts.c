#include<stdio.h>
/**
 * _puts- Function that prints a string
 * @s: The argument string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
