#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a previously allocated 2d grid
 * @grid: 2d array of integers
 * @height: number of rows in a 2d array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
