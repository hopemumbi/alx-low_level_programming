#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: var
 * Return: 1 for a letter or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
