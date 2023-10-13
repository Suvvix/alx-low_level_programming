#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 *
 * Description: This function prints a square of a given size using the
 * character '#'. If the size is 0 or less, it prints only a new line.
 */
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
