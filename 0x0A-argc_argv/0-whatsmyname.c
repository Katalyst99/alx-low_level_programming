#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: The count/number of arguments supplied to the program
 * @argv: An array of pointers to the strings which are those arguments.
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
