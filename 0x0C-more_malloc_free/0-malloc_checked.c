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
		if (b == 0)
		{
			return (NULL);
		}
	n = malloc(b);
		if (n == NULL)
		{
			exit(98);
		}
		else

		{
			return (n);
		}
}

