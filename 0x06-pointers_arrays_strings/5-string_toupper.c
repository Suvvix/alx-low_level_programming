#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer to a string
 *
 * Return: Pointer to the modified string 'n'
 */
char *string_toupper(char *n)
{
	int r;

	for (r = 0; n[r] != '\0'; r++)
	{
		if (n[r] >= 'a' && n[r] <= 'z')
		{
			n[r] = n[r] - 32;
		}
	}
	return (n);
}
