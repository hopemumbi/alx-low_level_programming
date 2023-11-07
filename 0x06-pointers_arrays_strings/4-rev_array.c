#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array
 * @n: no of elements in array
 */
void reverse_array(int *a, int n)
{
	/**
	 * @i: tranverses from beginning of array
	 * @last: end of array
	 * n - 1: index of last element
	 */
	int i, last;

	last = n - 1;
	/** n / 2 - reaches the middle of array **/
	for (i = 0; i < n / 2; i++)
	{
		/**
		 * temporary
		 *start = a[i] value of the element at the beginning of the array
		 * end = a[last] end of the array
		 */
		int start, end;

		start = a[i];
		end = a[last];
		/** update or swapping **/
		a[i] = end;
		a[last] = start;
		last--;
	}
}
