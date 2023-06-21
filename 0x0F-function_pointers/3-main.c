#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*opf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	opf = get_op_func(argv[2]);

	if (opf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		printf("%i\n", opf(num1, num2));
	}
	return (0);
}
