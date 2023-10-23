#include "main.h"
#include <stdio.h>
/**
 * *_strcpy -copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: string
 * @src:to be copied
 * Return: cpy
 */
char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (cpy);
}
