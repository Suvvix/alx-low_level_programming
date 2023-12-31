#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string
 *
 * Return: integer length og string
 */
int _strlen(char *str)
{
	int x = 0;

	if (!str)
		return (0);
	while (*str++)
		x++;
	return (x);
}

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ox;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	ox = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ox == -1)
		return (-1);
	if (len)
		bytes = write(ox, text_content, len);
	close(ox);
	return (bytes == len ? 1 : -1);
}
