#include <stdio.h>

/**
 * main - Program prints the number of arguments passed into it
 * @argc: The count/number of the arguments supplied to the program
 * @argv: An array of pointers to the strings which are those arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
