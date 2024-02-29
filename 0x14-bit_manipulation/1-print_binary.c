#include <stdio.h>
#include "main.h"
/**
 *print_binary - Prints the binary representation of a number.
 *@n: The number to print in binary
 *
 *
 */
void print_binary(unsigned long int n)
{
	int i, size, index, print = 0;
	unsigned long int mask;

	/*no of bits in n*/
	size = (sizeof(n) * 8);
	/*index of the highest bit*/
	index = size - 1;
	/*start with leftmost bit*/
	mask = 1UL << index;

	for (i = 0; i <= index; i++)
	{
		/*Check if the current bit is set */
		if (n & mask)
		{
			_putchar('1');
			print = 1;/*Set the flag to start printing*/

		}
		/*Print if flag is set or last bit*/
		else if (print || i == index)
		{
			_putchar('0');
		}
		/*Shift the mask to the right */
		mask >>= 1;
	}
}
