#include "main.h"
#include <stdio.h>
/**
 * puts_half -prints half of a string,
 * followed by a new line.
 * @str: input
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = ((len + 1) / 2); i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
