#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');

}
