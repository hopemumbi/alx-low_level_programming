#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenates two strings
 *@dest: destination
 *@src: source
 *Return: appended string
 */
char *_strcat(char *dest, char *src)
{
	char *concat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (concat);
}
