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


	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
/**
 *Strings are arrays of chars, and array indexes start to count from 0.
 *because the array starts at 0
 *if we want the last charachter, we need the length-1
 */
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
