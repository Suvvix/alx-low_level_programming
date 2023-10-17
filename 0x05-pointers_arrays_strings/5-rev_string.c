#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int w, r;
	char tmp;

	for (w = 0; s[w] != '\0'; ++w)
		;

	for (r = 0; r < w / 2; r++)
	{
		tmp = s[r];
		s[r] = s[w - 1 - r];
		s[w - 1 - r] = tmp;
	}
}
