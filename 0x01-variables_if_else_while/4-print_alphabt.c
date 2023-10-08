#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing alphabets except q and e.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
