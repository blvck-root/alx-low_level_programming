#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

void copy(int fd_from, char *file_from, int fd_to, char *file_to);

/**
 * main - copy content from one file to another
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	char *err, *file_from, *file_to;
	int fd_from, fd_to;

	/* check if number of args is 3 */
	if (argc != 3)
	{
		err = "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, err, strlen(err));
		exit(97);
	}

	/* extract file names */
	file_from = argv[1];
	file_to = argv[2];

	/* open file_from */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		err = "Error: Can't read from file ";
		dprintf(STDERR_FILENO, "%s %s\n", err, file_from);
		exit(98);
	}

	/* open file_to */
	fd_to = open(file_to, O_WRONLY | O_APPEND | O_CREAT | O_EXCL, 0664);
	if (fd_to == -1 && EEXIST == errno)
		fd_to = open(file_to, O_WRONLY | O_TRUNC | O_APPEND);

	if (fd_to == -1)
	{
		err = "Error: can't write to ";
		dprintf(STDERR_FILENO, "%s %s\n", err, file_to);
		exit(99);
	}
	copy(fd_from, file_from, fd_to, file_to);
	return (0);
}

/**
 * copy - read from a file and write to another
 * @fd_from: file descriptor of the file to copy from
 * @file_from: name of the file to copy from
 * @fd_to: file descriptor of the file to copy to
 * @file_to: name of the file to copy to
 * Return: void
 */
void copy(int fd_from, char *file_from, int fd_to, char *file_to)
{
	int res, nb_write, nb_read = -1;
	char buf[1024], *err;

	/* read file_from */
	while (nb_read != 0)
	{
		nb_read = read(fd_from, buf, 1024);
		if (nb_read == -1)
		{
			err = "Error: Can't read from file ";
			dprintf(STDERR_FILENO, "%s %s\n", err, file_from);
			exit(98);
		}

		buf[nb_read] = '\0';
		nb_write = write(fd_to, buf, nb_read);

		if (nb_write == -1)
		{
			err = "Error: Can't write to ";
			dprintf(STDERR_FILENO, "%s %s\n", err, file_to);
			exit(99);
		}
	}

	res = close(fd_from);
	if (res == -1)
	{
		err = "Error: Can't close fd ";
		dprintf(STDERR_FILENO, "%s %d", err, fd_from);
		exit(100);
	}

	res = close(fd_to);
	if (res == -1)
	{
		err = "Error: Can't close fd ";
		dprintf(STDERR_FILENO, "%s %d", err, fd_to);
		exit(100);
	}
}
