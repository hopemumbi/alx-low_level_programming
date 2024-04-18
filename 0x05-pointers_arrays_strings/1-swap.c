#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: a pointer to an integer a;
 * @b: a pointer to an integer b;
 */
void swap_int(int *a, int *b)
{
	/* Store the value pointed to by 'a' in a temporary variable 'c' */
	int c = *a;
	/* Assign value pointed to by 'b' to the memory location pointed to by 'a' */
	*a = *b;
	 /* Assign the value stored in 'c' to the memory location pointed to by 'b' */
	*b = c;
}
