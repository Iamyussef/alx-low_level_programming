#include "main.h"
#include <unistd.h>
#include <sys/types.h>

/**
 * clear_bit - clears bit
 * @n: decimal number
 * @index:he index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j = 1;
	unsigned int p;

	if (index > 64)
		return (-1);
	p = index;
		while (p > 0)
		{
			j *= 2;
			p--;
		}
	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}
