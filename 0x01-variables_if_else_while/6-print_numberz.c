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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	printf("\n");
	return (0);
}
