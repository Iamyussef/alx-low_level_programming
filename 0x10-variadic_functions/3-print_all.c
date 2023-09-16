#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * @...: arguments passed to the function
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
		va_start(args, format);
		while (format != NULL && format[j] != '\0')
		{
			if (format[j] == 'c')
			{
				char c = va_arg(args, int);
					printf("%c, ", c);
			}
			else if (format[j] == 'i')
			{
				int i = va_arg(args, int);
					printf("%d, ", i);
			}
			else if (format[j] == 'f')
			{
				double f = va_arg(args, double);
					printf("%f, ", f);
			}
			else if (format[j] == 's')
			{
				char *s = va_arg(args, char *);
					if (s == NULL)
						printf("(nil)");
					else
						printf("%s", s);
			}
			j++;
		}
	printf("\n");
	va_end(args);
}



