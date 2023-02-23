#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, for multiples of three print Fizz,
 * for the multiples of five print Buzz and for multiples of 3 and 5
 * FizzBuzz is printed.
 * Return: Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
