#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
{
	close(fd);
	return (0);
}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
	close(fd);
	free(buffer);
	return (0);
}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1 || nwritten != nread)
{
	close(fd);
	free(buffer);
	return (0);
	}

	close(fd);
	free(buffer);

	return (nwritten);
}
