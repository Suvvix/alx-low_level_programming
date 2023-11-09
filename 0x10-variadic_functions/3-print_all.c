#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    int index = 0;
    char *current_str;
    char *separator = "";

    va_list arg_list;

    va_start(arg_list, format);

    if (format != NULL)
    {
        while (format[index] != '\0')
        {
            switch (format[index])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(arg_list, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(arg_list, int));
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(arg_list, double));
                    break;
                case 's':
                    current_str = va_arg(arg_list, char *);
                    if (current_str == NULL)
                        current_str = "(nil)";
                    printf("%s%s", separator, current_str);
                    break;
                default:
                    index++;
                    continue;
            }
            separator = ", ";
            index++;
        }
    }

    printf("\n");
    va_end(arg_list);
}
