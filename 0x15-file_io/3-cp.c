#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024
/**
 * print_error - Prints an error message to stderr and exits with a given code
 * @msg: The error message to print
 * @file: The file name to include in the error message, or NULL if not needed
 * @code: The exit code to use
 */
void print_error(char *msg, char *file, int code);
/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
	{
	int fd_from, fd_to, nread, nwrite, close_res;
	char buf[BUFSIZE];

if (argc != 3)
	{
	print_error("Usage: cp file_from file_to\n", NULL, 97);
	}

	fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
	{
	print_error("Error: Can't read from file ", argv[1], 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
	{
	close(fd_from);
	print_error("Error: Can't write to file ", argv[2], 99);
	}

while ((nread = read(fd_from, buf, BUFSIZE)) > 0)
	{
	nwrite = write(fd_to, buf, nread);
if (nwrite != nread)
	{
	close(fd_from);
	close(fd_to);
	print_error("Error: Can't write to file ", argv[2], 99);
	}
}

if (nread == -1)
	{
	close(fd_from);
	close(fd_to);
	print_error("Error: Can't read from file ", argv[1], 98);
	}

	close_res = close(fd_from);
if (close_res == -1)
	{
	print_error("Error: Can't close fd ", argv[1], 100);
	}

	close_res = close(fd_to);
if (close_res == -1)
	{
	print_error("Error: Can't close fd ", argv[2], 100);
	}

	return (0);
}
/**
 * print_error - Prints an error message and exits the program with the given code.
 * @msg: The error message to print.
 * @file: The filename related to the error (or NULL if not applicable).
 * @code: The exit code to use when exiting the program.
 */
void print_error(char *msg, char *file, int code)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file != NULL ? file : "");
	exit(code);
}
