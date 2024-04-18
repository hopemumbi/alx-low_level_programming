#include "main.h"
/**
 * _puts - writes the string pointed to by 'str' to stdout
 *         followed by a newline character.
 *
 * @str: The string to write.
 */
void _puts(char *str)
{
	/* Loop through each character in the string until reaching '\0' */
	while (*str != '\0')
	{
		/* Write the current character to stdout */
		_putchar(*str);
		/* Move to the next character in the string */
		str++;
	}
	/* Write a newline character to stdout */
	_putchar('\n');
}
