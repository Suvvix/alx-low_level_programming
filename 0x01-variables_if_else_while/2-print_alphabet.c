#include <stdio.h>

/**
 * main - entry point
 *
 * Description: alphabet letters.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');

	return (0);
}
