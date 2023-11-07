#include "main.h"
/**
 *leet - t encodes a string into 1337.
 *@str: string to be encoded
 *Return: string 1337
 */
char *leet(char *str)
{
	int i, j;
	char chars[] = "aAeEoOtTlL";
	Char repl[] = "4433007711";

	/**loop thru the whole string until the null terminator**/
	for (i = 0; str[i] != '\0'; i++)
	{
		/**loop thru the characters to be replaced**/
		for (j = 0; char[j] != '\0'; j++)
		{
			/**
			 * if any character in @str matches any in @chars
			 * replace it with corresponding @repl
			 */
			if (str[i] == chars[j])
			{
				str[i] == repl[i];
				/**exit inner loop once substitution is made**/
				break;
			}
		}
	}
	return (str);
}

