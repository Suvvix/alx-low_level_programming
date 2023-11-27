#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * check_arguments - Check the number of command-line arguments.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 1 if the number of arguments is incorrect, otherwise 0.
 */
int check_arguments(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (1);
	}
	return (0);
}

/**
 * open_files - Open source and destination files.
 * @source: Path to the source file.
 * @destination: Path to the destination file.
 *
 * Return: 1 if an error occurs during file opening, otherwise 0.
 */
int open_files(char *source, char *destination)
{
	int fd_from, fd_to;

	fd_from = open(source, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source);
		return (1);
	}

	fd_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", destination);
		close(fd_from);
		return (1);
	}

	return (0);
}

/**
 * copy_content - Copy the content from one file to another.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void copy_content(int fd_from, int fd_to)
{
	ssize_t rd, wr;
	char buf[BUF_SIZE];

	do {
		rd = read(fd_from, buf, BUF_SIZE);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file\n");
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		wr = write(fd_to, buf, rd);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	} while (rd > 0);
}

/**
 * close_files - Close file descriptors.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, otherwise exit codes based on errors.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (check_arguments(argc, argv) == 1)
		exit(97);

	if (open_files(argv[1], argv[2]) == 1)
	exit(98);

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);

	copy_content(fd_from, fd_to);
	close_files(fd_from, fd_to);

	return (0);
}
