#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int pos, space;

		for (pos = 0; pos < n; pos++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == pos)
					_putchar('\\');
				else if (space < pos)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
