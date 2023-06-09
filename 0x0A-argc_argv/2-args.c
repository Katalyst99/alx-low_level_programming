#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0
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
