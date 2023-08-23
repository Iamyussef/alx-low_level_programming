#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function allocates memory using malloc and exit if failed
 * @b: integer
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int*p;
	p = malloc(b);
	if (p == 98)
	{
		exit(98);
	}
	return(p);
}

