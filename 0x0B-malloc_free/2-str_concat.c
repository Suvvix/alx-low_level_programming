#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A new string containing the concatenation of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len_s1 = 0, len_s2 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	char *concatenated = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concatenated == NULL)
		return (concatenated);

	for (int i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (int i = 0; i < len_s2; i++)
		concatenated[len_s1 + i] = s2[i];

	concatenated[len_s1 + len_s2] = '\0';

	return (concatenated);
}

