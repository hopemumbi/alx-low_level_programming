#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/**Print a newline when the end of the string is reached.**/
		_putchar('\n');
		/**Terminate the recursion.**/
		return;
	}
	/**Print the current character.**/
	_putchar(*s);
	/**Recursively call _puts_recursion with the next character.**/
	_puts_recursion(s + 1);
}
