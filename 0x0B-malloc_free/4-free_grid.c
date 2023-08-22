#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function to free the grid
 * @grid: grid of memories
 * @height: int
 * Return: Nothing
 */


void free_grid(int **grid, int height)
{
	int i = 0;
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
}
