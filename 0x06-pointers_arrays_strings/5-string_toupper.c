#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	{
		if (str[r] >= 97 && str[r] <= 122)
		{
			str[r] = str[r] - 32;
		}
	}
	return (str);
}
