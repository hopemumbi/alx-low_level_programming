#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Checks the endianness of the system.
 * big-endian - the MSB is stored in the lowest memory address
 *            - the LSB is stored in the highest memory address
 *            (HOW WE WRITE NUMBERS)
 * little-endian - the LSB is stored in the lowest memory address
 *		-the MSB is stored in the highest memory address
 * Return: If big-endian - 0. If little-endian - 1.
 */
int get_endianness(void)
{
	int n = 1;
	/* char pointer(endian) - points to the address of num*/
	char *endian = (char *)&n;

	/**
	 * Check if the value at the address pointed to by endian is
	 * 1 - little-endian
	 * 0 - big endian
	 */
	if (*endian == 1)
		return (1);
	else
		return (0);
}

