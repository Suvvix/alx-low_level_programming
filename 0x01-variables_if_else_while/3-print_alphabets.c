#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing alphabets lowercase then uppercase.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c = 'a';
	char C = 'A';

	/*print a - z*/
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	/*print A - Z*/
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
