#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: The pointer to the name of the file
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	r = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, r);
	if (r == -1 || wr == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (wr);
}