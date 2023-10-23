#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *print_rev -prints a string, in reverse,
 *followed by a new line.
 *@s: pointer to string
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
