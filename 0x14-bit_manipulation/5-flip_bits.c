#include <unistd.h>
#include "main.h"
#include <sys/type.h>

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number to convert to
 * Return: the number of bits necessary to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	int count;
		coount = 0;

		for (; difference != 0; difference &= (difference - 1))
		{
			count++;
		}
	return (count);
}
