#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two
 *..diagonals of a square matrix of integers.
 *@a: pointer to matrix
 *@size: size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1, sum_diag2, diag1, diag2;

	sum_diag1 = sum_diag2 = diag1 = 0;
	/**Initialize diag2 to the last position in the first diagonal.**/
	diag2 = size - 1;
/**iterates through the rows of the square matrix.**/
	for (i = 0; i < size; i++)
	{
		/**Add the current element in the first diagonal to sum_diag1.**/
		sum_diag1 += a[i * size + diag1];
		/**Add the current element in the second diagonal to sum_diag**/
		sum_diag2 += a[i * size + diag2];
		/**move to the next position**/
		diag1++;
		diag2--;
	}
	printf("%d, ", sum_diag1);
	printf("%d\n", sum_diag2);
}
