#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL, it is not printed.
* If one of the strings if NULL, (nil) is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *s;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (s = va_arg(ap, char *)) ? s : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}