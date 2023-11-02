#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - a function that concatenates two strings.
*
* @s1: first char
* @s2: secound char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, ss1, ss2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ss1 = 0; s1[ss1] != '\0'; ss1++)
		;
	for (ss2 = 0; s2[ss2] != '\0'; ss2++)
		;

	str = malloc(ss1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
