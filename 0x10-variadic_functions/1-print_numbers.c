#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%d%s", va_arg(ap, int),
			x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
