#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* Initialize the hash value to a prime number 5381 */
	unsigned long int hash = 5381;
	int c;

	/* Iterate over each character in the string until the `\0` */
	while ((c = *str++))
	{
		/* Update the hash value using the formula: hash * 33 + c */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	/* Return the computed hash value */
	return (hash);
}

