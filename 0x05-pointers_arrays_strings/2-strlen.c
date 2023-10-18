#include "main.h"
/**
 *_strlen - returns the length of a stinr
 *Return: length
 *@s: pointer to string
 */
int _strlen(char *s)
{
	int length_of_string;

	length_of_string = 0;
	while (*s != '\0')
	{
		length_of_string++;
		s++;
	}
	return (length_of_string);
}
