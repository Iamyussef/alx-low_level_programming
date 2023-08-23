#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int length, i;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = min++;
	return (ptr);
}
