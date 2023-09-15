#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char
 * @n: number of arguments passed
 * @...: arguments passed
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);
				if (separator != NULL)
				{
					if (i != n - 1)
					{
						printf("%d%s", x, separator);
					}
					else
					{
						printf("%d", x);
					}
				}
				else
				{
					printf("%d", x);
				}
		}
	printf("\n");
	va_end(args);
}
