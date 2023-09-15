#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of all its parameters.
 * @n: number of arguments passed
 * @(...): arguments passed
 * Return: sum of all arguments passed to the function.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list list;
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			int x = va_arg(list, int);
				sum += x;
		}
		va_end(list);
	return (sum);
}

