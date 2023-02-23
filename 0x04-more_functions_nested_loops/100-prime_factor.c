#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, f;

	i = 612852475143;
	for (f = 2; f <= i; f++)
	{
		if (i % f == 0)
		{
			i /= f;
			f--;
		}
	}
	printf("%li\n", f);
	return (0);
}
