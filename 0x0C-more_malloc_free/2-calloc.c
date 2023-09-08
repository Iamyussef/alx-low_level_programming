#include "main.h"

/**
 * _calloc - allocates memory for an array, initialized to 0
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: void pointer to array space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (!nmemb || !size)
		return (NULL);
	m = malloc(nmemb * size);
	if (!m)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		m[nmemb] = 0;
	return (m);
}
