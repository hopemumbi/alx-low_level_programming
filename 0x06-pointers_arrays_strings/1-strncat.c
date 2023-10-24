#include "main.h"
/**
 *_strncat -  function that concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: maximum number of characters to append from s2 to `s1.
 *Return: concate
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concate = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';
	return (concate);
}
