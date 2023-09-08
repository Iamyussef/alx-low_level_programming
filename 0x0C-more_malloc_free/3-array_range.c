#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *m;
	int i = 0;
	int size = 0;
	int n = min;
		if (min > max)
		{
			return (NULL);
		}
	size = max - min + 1;
	m = malloc(size * sizeof(int));
		if (m == 0)
		{
			return (NULL);
		}
		for (min = n; min <= max; min++)
		{
			m[i] = min;
			i++;
		}
		return (m);
}


