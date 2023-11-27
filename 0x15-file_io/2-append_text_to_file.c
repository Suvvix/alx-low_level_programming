#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string
 *
 * Return: integer length of string
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
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ox;
	ssize_t bytes = 0, len;

	if (!filename)
		return (-1);

	ox = open(filename, O_WRONLY | O_APPEND);
	if (ox == -1)
		return (-1);

	len = _strlen(text_content);

	if (len > 0)
		bytes = write(ox, text_content, len);

	close(ox);

	return (bytes == len ? 1 : -1);
}

