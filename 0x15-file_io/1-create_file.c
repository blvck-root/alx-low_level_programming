#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: text to write to the file
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nb_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
	if (fd == -1 && EEXIST == errno)
		fd = open(filename, O_RDWR | O_TRUNC);

	if (fd == -1)
		return (-1);

	/* if text_content == NULL leave the file empty */
	if (text_content == NULL)
		return (1);

	nb_write = write(fd, text_content, strlen(text_content));
	close(fd);
	return (nb_write == -1 ? -1 : 1);
}
