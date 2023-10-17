#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0; /* Initialize the result to 0 */
	int sign = 1; /* Initialize the sign to positive */

	/* Skip leading white spaces */
	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}

	/* Handle sign (if any) */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/* Process digits and update the result */
	while (*s >= '0' && *s <= '9')
	{
		/* Check for overflow before updating the result */
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
