#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The pointer to the name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	o = open(filename, O_WRONLY |  O_APPEND);
	if (o == -1)
	{
		return (-1);
	}

	while (text_content[len])
	{
		len++;
	}

	wr = write(o, text_content, len);
	if (wr == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
