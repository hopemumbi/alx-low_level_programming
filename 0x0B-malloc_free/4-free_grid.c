#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the memory allocated for a 2-dimensional array.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the array.
 */
void free_grid(int **grid, int height)
{
	int i;

	/*Free memory for each row*/
	for (i = 0; i < height; i++)
		free(grid[i]);

	/*Free memory for the array of pointers (rows)*/
	free(grid);
}
