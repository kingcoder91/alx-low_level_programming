#include "main.h"
#include <stdlib.h>

/**
 * free_grid -this function frees a 2-dimensional array of integers
 * @grid: the 2-dimensional array of integers to be freed
 * @height: the height of grid
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
