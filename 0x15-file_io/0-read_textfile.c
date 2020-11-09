#include "holberton.h"

/**
 * read_textfile - function that reads text file and prints to standard output.
 * @filename: Name of the file to open.
 * @letters : Numbers of letters that the text file has.
 *
 * Return: Numbers of letters in the text file. O if it fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_letters;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
		num_letters = read(fd, buf, letters);
		close(fd);
		write(STDOUT_FILENO, buf, num_letters);
		if (num_letters == -1)
			return (0);
		return (num_letters);
	}
	return (0);
}
