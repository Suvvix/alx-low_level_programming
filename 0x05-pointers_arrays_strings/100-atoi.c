#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int seenDigit = 0;

	while (*s)
	{
		if (*s == ' ')
		{
			if (seenDigit)
				break;
		}
		else if (*s == '-')
		{
			sign = -1;
			seenDigit = 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			seenDigit = 1;

			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = result * 10 + (*s - '0');
		}
		else if (seenDigit)
		{
			break;
		}

		s++;
	}

	return (sign * result);
}

