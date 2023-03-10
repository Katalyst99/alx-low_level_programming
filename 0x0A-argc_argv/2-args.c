#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: The count/number of the arguments supplied to the program
 * @argv: An array of pointers to the strings which are those arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
