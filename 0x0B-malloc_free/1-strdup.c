#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);

	for (; x < size; x++)
		n[x] = str[x];

	return (n);
}
