#include <stdio.h>

/**
 * main - entry point
 *
 * description: print 0-9 using putchar.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
