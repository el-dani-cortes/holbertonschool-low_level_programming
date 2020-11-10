#include "holberton.h"

/**
 * error_close - function that prints the error when close fail.
 * @close_from: validate number for the close function of the original file.
 * @close_to: validate number for the close function of the file created.
 * @fd_from: File descriptor for the open function of the original file.
 * @fd_to: File descriptor for the open function of file created.
 *
 * Return: Always nothing.
 */
void error_close(int close_from, int close_to, int fd_from, int fd_to)
{
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}
/**
 * error_open - function that prints the error when open fail.
 * @fd_from: File descriptor for the open function of the original file.
 * @fd_to: File descriptor for the open function of file created.
 * @f_from: Name of the file to copy.
 * @f_to: Name of the file to copy the content of other file.
 *
 * Return: Always nothing.
 */
void error_open(int fd_from, int fd_to, const char *f_from, const char *f_to)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_to);
		exit(98);
	}
}
/**
 * copy_file - function copies the content of a file to another file.
 * @file_from: Name of the file to copy.
 * @file_to: Name of the file to copy the content of other file.
 *
 * Return: Always nothing.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, validate, num_bytes, close_to, close_from;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		exit(-1);
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_open(fd_from, fd_to, file_from, file_to);
	while ((num_bytes = read(fd_from, buf, 1024)) != 0)
	{
		validate = write(fd_to, buf, num_bytes);
		if (validate == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				file_to);
			exit(99);
		}
		if (validate == 1024)
		{
			free(buf);
			buf = malloc(sizeof(char) * 1024);
		}
	}
	free(buf);
	close_from = close(fd_from);
	close_to = close(fd_to);
	error_close(close_to, close_from, fd_from, fd_to);
}
/**
 * main - program that copies the content of a file to another file.
 * @ac: Number of arguments from the command line.
 * @av: Strings of arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
