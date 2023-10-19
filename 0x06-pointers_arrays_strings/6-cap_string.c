#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	Char *ptr = str;
	int del = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			del = 1;
		else if (isLower(*str) && del)
		{
			*str -= 32;
			del = 0;
		}
		else
			del = 0;
		str++;
	}
	return (ptr);
}
