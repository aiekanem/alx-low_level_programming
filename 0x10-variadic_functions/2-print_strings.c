#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: variable arguments list containing the strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        char *str = va_arg(args, char *);
        if (str == NULL)
            str = "(nil)";
        printf("%s", str);
        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    va_end(args);

    _putchar('\n');
}

