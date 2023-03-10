#include <stdio.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 * @argc: The count/number of the arguments supplied to the program
 * @argv: An array of pointers to the strings which are those arguments
 * Return: 1 if program does not receive two arguments and 0 if program does.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%i\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
