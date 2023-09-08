#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory.
 * @b: unsigned int
 * Returns: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *n;
	n = malloc(b);
		if (n == NULL)
		{
			exit(98);
		}
	return (n);
}

