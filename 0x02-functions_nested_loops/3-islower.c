#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: any alphabet
 * Return: 1 for lowercase and 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
