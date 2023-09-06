#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory in the heap for a 2D array of integers
 * @width: int
 * @height: int
 * Return: a pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **array;
		if (width <= 0 || height <= 0)
		{
			return (NULL);
		}
	array = (int **)malloc(sizeof(int *) * height);
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < height; i++)
			{
				array[i] = (int *)malloc(sizeof(int) * width);
				if (array[i] == NULL)
				{
					for (j = 0; j < i; j++)
					{
						free(array[j]);
					}
					free(array);
					return (NULL);
				}
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width ; j++)
			{
				array[i][j] = 0;
			}
		}
	return (array);
}
