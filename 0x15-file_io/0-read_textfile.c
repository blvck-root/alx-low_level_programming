#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read a text file and print it to the standard output
 * @filename: name of file
 * @letters: number of letters to print
 * Return: actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t ac_letters = 0;
	int fd, nb_read = -1;
	char buf[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (nb_read != 0 && ac_letters < letters)
	{
		nb_read = read(fd, buf, letters <= 1024 ? letters : 1024);
		if (nb_read == -1)
			return (0);

		buf[nb_read] = '\0';
		write(STDOUT_FILENO, buf, nb_read);
		ac_letters += nb_read;
	}
	close(fd);
	return (ac_letters);
}
