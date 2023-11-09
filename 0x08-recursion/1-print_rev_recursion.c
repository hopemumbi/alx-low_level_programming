#include "main.h"
/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/**When the end of the string is reached terminate**/
		return;
	}
	/**Recursively call _print_rev_recursion with the next character.**/
	_print_rev_recursion(s + 1);
	/**After returning from the recursive call, print the character.**/
	_putchar(*s);
}
