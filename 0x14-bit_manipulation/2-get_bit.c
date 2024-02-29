#include <stdio.h>
#include "main.h"
/**
 *get_bit -  function that returns the value of a bit at a given index.
 *@n: The number to print in binary
 *@index: the index to be printed
 *
 *Return: the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* check if index is within range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;

	/*Check if the bit at index is set */
	if (n & mask)
		return (1);
	else
		return (0);
}
