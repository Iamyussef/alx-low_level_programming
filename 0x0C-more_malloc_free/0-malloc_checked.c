#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory using malloc and exit if failed
 * @b: integer
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);
		if (p == 0)
		{
			exit(98);
		}
	return (p);
}

