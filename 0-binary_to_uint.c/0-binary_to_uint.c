#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  a string of 0 and 1 chars
 *
 * Return: uint or  0 if b is NULL or has chars that not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i, uint = 0, len = strlen(b), power = 1;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			uint += power;
		}
		power *= 2;
	}

	return (uint);
}
