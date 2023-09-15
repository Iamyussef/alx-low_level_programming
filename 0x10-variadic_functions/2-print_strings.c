#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			char *str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else if (str != NULL)
				{
					printf("%s", str);
				}
				if (i != n - 1 && separator != NULL)
				{
					printf("%s", separator);
				}
		}
		printf("\n");
		va_end(args);
}
