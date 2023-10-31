#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - find the length of a string
 * @s: string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - concatenates all the strings in an array of strings
 * @ac: number of strings in the array
 * @av: the array of strings
 * Return: A pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int x = 0, lk = 0, y = 0, cm = 0;
	char *r;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; x < ac; x++, lk++)
		lk += _strlen(av[x]);
	r = malloc(sizeof(char) * lk + 1);
	if (r == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, cm++)
			r[cm] = av[x][y];

		r[cm] = '\n';
		cm++;
	}
	r[cm] = '\0';
	return (r);
}

