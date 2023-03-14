#include "main.h"
/**
 * free_grid - allocates a grid, make space and free space
 * @grid: for the  width of grid
 * @height: for  height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
