#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: unsigned int
 * @c: char
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	int i = 0;
		if (size == 0)
		{
			return (NULL);
		}
	n = (char *)malloc(sizeof(char) * size);
		if (n == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				n[i] = c;
			}
		}
	return (n);
}
