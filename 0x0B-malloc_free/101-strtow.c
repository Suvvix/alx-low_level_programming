#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * wrdcnt - count the number of words
 * @s: string to count
 *
 * Return: The number of words in the string
 */
int wrdcnt(char *s)
{
	int x, n = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				n++;
		}
		else if (x == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int x, y, z, m, n = 0, wc = 0;
	char **rico;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	rico = (char **)malloc(n * sizeof(char *));
	if (rico == NULL)
		return (NULL);
	rico[n - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			rico[wc] = (char *)malloc(y * sizeof(char));
			y--;
			if (rico[wc] == NULL)
			{
				for (z = 0; z < wc; z++)
					free(rico[z]);
				free(rico[n - 1]);
				free(rico);
				return (NULL);
			}
			for (m = 0; m < y; m++)
				rico[wc][m] = str[x + m];
			rico[wc][m] = '\0';
			wc++;
			x += y;
		}
		else
			x++;
	}
	return (rico);
}

