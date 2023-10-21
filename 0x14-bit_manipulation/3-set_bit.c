#include "main.h"
#include <unistd.h>
#include <sys/types.h>

/**
 * set_bit - sets value of a bit to 1
 * @n: decimal number
 * @index: the index, starting from 0 of the bit you want to set
 * Return: if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int h = 1;

		if (index > 64)
		{
			return (-1);
		}

		while (index > 0)
		{
			index--;
			h *= 2;
		}
	*n += h;

	return (1);
}
