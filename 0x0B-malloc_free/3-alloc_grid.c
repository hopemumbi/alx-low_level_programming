#include "main.h"
#include <stdlib.h>
/**
 ***alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width of array
 *@height: height of array
 *Return: NULL if width or height is 0 or negative, or n failure
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	/*Allocate memory for rows(array  of pointers)*/
	ar = (int **)malloc(height * sizeof(int *));
	if (ar == NULL)/*check if memory allocation fails*/
		return (NULL);

	/*Allocate memory for columns in each row*/
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
		/*check if memory allocation was successful*/
		if (ar[i] == NULL)
		{
			/*If allocation fails, free memory and return NULL*/
			for (j = 0; j < i; j++)
				free(ar[j]);
			free(ar);
			return (NULL);
		}
	}

	/*Each element of the grid should be initialized to 0*/
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}

	return (ar);
}
