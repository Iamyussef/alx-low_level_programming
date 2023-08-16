#include "main.h"
#include <stdlib.h>

/**
 * *create_array - forms  an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize with
 * Return: pointer to the array initialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size);
		if (ptr == NULL	|| size == 0)
		{
			return (0);
		}
	for (int i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

