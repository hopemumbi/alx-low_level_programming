#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: smallent value
 * @max: largest value
 *
 * Return: NULL if min > max
 *         NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	/*Check if min is greater than max*/
	if (min > max)
		return (NULL);

	/*Allocate memory for the array of integers using malloc*/
	p =  malloc((max - min + 1) * sizeof(int));

	/*check if malloc fails*/
	if (p == NULL)
		return (NULL);

	/* Fill the array with integers from min to max (inclusive) */
	for (i = 0; i <= max - min; i++)
		p[i] = min + i;

	return (p);
}
