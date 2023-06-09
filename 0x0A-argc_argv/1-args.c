#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 if successful
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
