#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of each element
 *Return: void pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	int i;
		if (nmemb == 0 || size == 0)
			return (NULL);
	n = malloc(nmemb * size);
		if (n == NULL)
			return (NULL);
	i = nmemb * size;
	while (i--)
	{
		n[i] = 0;
	}
	return (n);
}
