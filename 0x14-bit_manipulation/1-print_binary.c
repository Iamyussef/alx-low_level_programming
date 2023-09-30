#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int m = 64;
	int type = 0;

	while (m)
	{
		if (n & 1L << --m)
		{
			_putchar('1');
			type++;
		}
		else if (type)
			_putchar('0');
	}

	if (!type)
		_putchar('0');
}
