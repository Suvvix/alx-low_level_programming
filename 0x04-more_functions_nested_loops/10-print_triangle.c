#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int hgh, base;

		for (hgh = 1; hgh <= size; hgh++)
		{
			for (base = hgh; base < size; base++)
			{
				_putchar(' ');
			}

			for (base = 1; base <= hgh; base++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
