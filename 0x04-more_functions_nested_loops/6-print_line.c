#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	int lnC;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnC = 1; lnC <= n; lnC++)
			_putchar('_');
		-putchar('\n');
	}
}
