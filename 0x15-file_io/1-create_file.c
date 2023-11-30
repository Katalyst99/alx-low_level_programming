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

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	else
	{
		o = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
		wr = write(o, text_content, len);
		if (wr == -1 || o == -1)
		{
			return (-1);
		}
		close(o);
	}
	return (1);


}
