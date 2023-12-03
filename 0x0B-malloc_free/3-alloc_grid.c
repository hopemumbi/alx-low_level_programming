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
	int **ar, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*Allocate memory for rows*/
	ar = malloc(height * sizeof(int));
	if (ar == NULL)
		return (NULL);

	/*Allocate memory for columns in each row*/
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			return (NULL);
		}
	}


	return (ar);
}
