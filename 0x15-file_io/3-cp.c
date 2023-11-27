#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @f_from: file_from.
 * @f_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		int err_val = 98;

		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(err_val);
	}
	if (f_to == -1)
	{
		int err_val = 99;

		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(err_val);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err_close;
	ssize_t n_chars, n_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f_from, f_to, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(f_from, buf, 1024);
		if (n_chars == -1)
			error_file(-1, 0, argv);
		n_wr = write(f_to, buf, n_chars);
		if (n_wr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(f_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	err_close = close(f_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (0);
}

