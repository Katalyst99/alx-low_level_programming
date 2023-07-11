#include <stdio.h>
#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fdf, fdt, r, wr, ct, cf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdt == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((r = read(fdf, buffer, sizeof(buffer))) > 0)
	{
		wr = write(fdt, buffer, r);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cf = close(fdf);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf), exit(100);
	ct = close(fdt);
	if (ct == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt), exit(100);
	return (0);
}
