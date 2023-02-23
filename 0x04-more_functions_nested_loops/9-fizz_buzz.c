#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, for multiples of three print Fizz,
 * for the multiples of five print Buzz and for multiples of 3 and 5
 * FizzBuzz is printed.
 * Return: Always
 */
int main(void)
{
	int n = 2;

	printf("%i", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %i", n);
		}
	}
	printf("\n");
	return (0);
}
