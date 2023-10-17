#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int idx, isNeg, result, len, foundDigit, digit;

	idx = 0;
	isNeg = 0;
	result = 0;
	len = 0;
	foundDigit = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (idx < len && foundDigit == 0)
	{
		if (s[idx] == '-')
			++isNeg;

		if (s[idx] >= '0' && s[idx] <= '9')
		{
			digit = s[idx] - '0';
			if (isNeg % 2)
				digit = -digit;
			result = result * 10 + digit;
			foundDigit = 1;
			if (s[idx + 1] < '0' || s[idx + 1] > '9')
				break;
			foundDigit = 0;
		}
		idx++;
	}

	if (foundDigit == 0)
		return (result);

	return (result);
}
