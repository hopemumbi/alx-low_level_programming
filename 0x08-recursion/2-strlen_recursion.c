#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: string to be used
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length;
	/**when the end of the string is reached**/
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		/**move to next character**/
		length = _strlen_recursion(s + 1);
		/**add 1 to length to count the current character**/
		return (1 + length);
	}
}
