#include "holberton.h"

/**
 * append_text_to_file - function appends a text at the end of a file.
 * @filename: Name of the file to append a text.
 * @text_content: is a NULL terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, validate;

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
	{}
	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		validate = write(fd, text_content, i);
		if (validate == -1)
			return (-1);
		close(fd);
		return (1);
	}
	return (-1);
}
