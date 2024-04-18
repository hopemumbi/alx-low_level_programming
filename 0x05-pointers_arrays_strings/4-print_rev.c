#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in reverse
 *
 * @s: a pointer to a string
 */
void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);

	for (i = length - 1; s[i] != '\0'; i--)
		_putchar(s[i]);
	_putchar('\n');
}
