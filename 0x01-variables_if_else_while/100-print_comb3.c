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
	int digit1 = 0, digit2;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar (digit1 + 48);
				putchar (digit2 + 48);
				if (digit1 + digit2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
