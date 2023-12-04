#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees the memory allocated for a 2-dimensional array.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the array.
 */
void free_grid(int **grid, int height)
{
	grid = (int **)malloc(height * sizeof(int *));

	free(grid);
}
