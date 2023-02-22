#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int n, x, nm;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			nm = n * x;
			_putchar(',');
			_putchar(' ');
			if (nm <= 9)
			{
				_putchar(' ');
				_putchar(nm + '0');
			}
			else
			{
				_putchar((nm / 10) + '0');
				_putchar((nm % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
