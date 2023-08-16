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
		if (ptr == 0 || size == 0)
		{
			return (0);
		}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}

