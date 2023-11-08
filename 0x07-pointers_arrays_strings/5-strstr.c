#include "main.h"
#include <stdio.h>
/**
*_strstr - locates a substring.
*@haystack: input string
*@needle:string to be located
*Return: NULL or haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
/**Initialize a new index variable for each character in haystack**/
		int index = i;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[index] == needle[j])
			{
/**If the current characters match, continue to the next character**/
				index++;
/**If we reached the end of needle, we found a match**/
				if (needle[j + 1] == '\0')
				{
					return (haystack + i);
				}
			}
			else
			{
/** If characters don't match, break out of the loop**/
				break;
			}
		}
	}
/**If no match was found, return NULL**/
	return (NULL);
}
