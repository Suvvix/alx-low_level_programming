#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, r;

	c = 0;

	while (dest[c])
		c++;

	for (r = 0; r < n && src[r] != '\0'; r++)
		dest[c + r] = src[r];

	dest[c + r] = '\0';

	return (dest);
}
