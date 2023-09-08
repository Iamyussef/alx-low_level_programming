#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: a pointer to the allocated memory for an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i = 0;
		if (size == 0)
		{
			return (NULL);
		}
	m = malloc(nmemb * size);
		if (m == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < nmemb * size; i++)
			{
				m[i] = 0;
			}
		}
		return (m);
}
