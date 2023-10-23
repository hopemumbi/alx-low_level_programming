#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string -  function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
	int len, a, z;

	len = 0;

	/*calculate length of string*/
	while (s[len] != '\0')
	{
		len++;
	}

	a = 0;
	z = len - 1;
	while (a < z)
	{
		char swap;

		swap = s[a];
		s[a] = s[z];
		s[z] = swap;

		a++;
		z--;
	}
}
