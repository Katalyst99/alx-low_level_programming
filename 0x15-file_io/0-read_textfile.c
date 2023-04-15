#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX std output.
 * @filename: The pointer to the name of the file
 * @letters: The the number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, wr;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL || buffer == NULL)
	{
		return (0);
	}
	else
	{
		o = open(filename, O_RDONLY);
		r = read(o, buffer, letters);
		wr = write(STDOUT_FILENO, buffer, r);
		if (o == -1 || r == -1 || wr == -1 || wr != r)
		{
			free(buffer);
			return (0);
		}
		free(buffer);
		close(o);
	}
	return (wr);

}
