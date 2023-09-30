#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
		if (b == NULL)
			return (0);
	while (*b != NULL)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec = dec * 2 + (*b++ - '0');
	}
	return (dec);
}
