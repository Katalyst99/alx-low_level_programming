#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer.
 * @to: The char
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
