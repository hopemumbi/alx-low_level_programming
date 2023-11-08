#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a character array 's'
 * @accept:checks through 's' for matches
 * Return: or NULL
 */
char  *_strpbrk(char *s, char *accept)
{
	/** iterate through 's' and 'accept' respectively **/
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			/**
			 * checks if the character in position accept[j]
			 * matches the character in position s[i]
			 * If it matches..
			 * it returns a pointer to the i-th element in the array 's'.
			 */
			if (accept[j] == s[i])
			{
				/**
				 * pointer arithmetic.
				 * calculates the memory address that is 'i' positions
				 * after the address pointed to by 's'
				 */
				return (s + i);
			}
		}
	}
	/** if no match is found in 's' **/
	return (NULL);
}
