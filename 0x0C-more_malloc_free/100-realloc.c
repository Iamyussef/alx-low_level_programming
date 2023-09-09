#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: pointer to memory allocated .
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
		return (n);
	}
	if (new_size > old_size)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)n + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (n);
}
