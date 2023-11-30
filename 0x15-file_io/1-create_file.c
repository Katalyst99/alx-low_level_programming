#include "main.h"

/**
 * create_file - creates a file.
 * @filename: The pointer to the name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	wr = write(o, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}
	close(o);
	return (1);


}
