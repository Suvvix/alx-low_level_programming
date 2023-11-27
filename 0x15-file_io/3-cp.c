#include "main.h"
#include <stdlib.h>

/**
 * check_files - verifies if files can be accessed.
 * @source_fd: source file descriptor.
 * @dest_fd: destination file descriptor.
 * @args: command line arguments.
 * Return: No return value.
 */
void check_files(int source_fd, int dest_fd, char *args[])
{
	if (source_fd == -1)
	{
		custom_printf("Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		custom_printf("Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - entry point for the program.
 * @argc: number of command line arguments.
 * @argv: array of command line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, close_error;
	ssize_t num_chars, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		custom_printf("%s\n", "Usage: cp source_file destination_file");
		exit(97);
	}

	source_fd = custom_open(argv[1], O_RDONLY);
	dest_fd = custom_open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_files(source_fd, dest_fd, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = custom_read(source_fd, buffer, 1024);
		if (num_chars == -1)
			check_files(-1, 0, argv);
		num_written = custom_write(dest_fd, buffer, num_chars);
		if (num_written == -1)
			check_files(0, -1, argv);
	}

	close_error = custom_close(source_fd);
	if (close_error == -1)
	{
		custom_printf("Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	close_error = custom_close(dest_fd);
	if (close_error == -1)
	{
		custom_printf("Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return (0);
}

