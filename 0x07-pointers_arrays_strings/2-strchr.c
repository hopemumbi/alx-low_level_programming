#include "main.h"
#include <stdio.h>
/**
 *_strchr -  locates a character in a string.
 *@s:pointer to char to be searched
 *@c:char to be found
 *Return: 'ptr' to first occurence or 'NULL'
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
		{
			/**return a pointer to the first occurrence of c in the string s.**/
			return (s + i);
		}
		if (s[i] != c)
		{
			return (NULL);
		}
	}
	/**only return NULL after we've checked the entire string and not found c.**/
	return (NULL);
}
