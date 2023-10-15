#include "main.h"
/**
 * _isupper - checks uppercase letter
 * Return: 1 or 0.
 * @c:integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
