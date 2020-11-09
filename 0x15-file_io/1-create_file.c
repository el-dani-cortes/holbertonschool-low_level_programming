#include "holberton.h"

/**
 * create_file - function that create text file and write a text.
 * @filename: Name of the file to create.
 * @text_content: Is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, validate;

	for (i = 0; text_content[i]; i++)
	{}
	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
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