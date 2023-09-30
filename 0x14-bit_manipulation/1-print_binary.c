#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	void print_binary(unsigned long int n)
{
	int m = sizeof(n) * 8;
	int type = 0;

	while (m)
	{
		if (n & 1L << --bit)
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
