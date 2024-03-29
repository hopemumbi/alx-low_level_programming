#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits
 *             you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int flip;

	/* use XOR ^ to find the differing bits */
	flip = n ^ m;

	while (flip)
	{
		/** count the number of bits set to 1 */
		count += flip & 1;
		/*shift to the next bit */
		flip >>= 1;
	}
	return (count);
}
