#include "main.h"

/**
 * read_textfile - reads text from file as well as print it
 * @filename: name of file
 * @letters: numbers of bytes
 *
 * Return: number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ox;
	ssize_t bytes;
	char buf[BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	ox = open(filename, 0_RDONLY);
	if (ox == -1)
		return (0);
	bytes = read(ox, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(ox);
	return (bytes);
}
