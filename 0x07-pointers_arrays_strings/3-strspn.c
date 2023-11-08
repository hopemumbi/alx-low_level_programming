#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a character array s
 * @accept:checks through s for matches
 * Return:count
 */
unsigned int _strspn(char *s, char *accept)
{
	/** iterate through 's' and 'accept' respectively **/
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			/**
			 * checks if the character in position accept[j]
			 * matches the character in position s[i]
			 * If it matches..
			 * count is incremented to count the number of matching characters.
			 * the loop is then broken as soon as math is found
			 */
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		/**
		 * checks if a character in 'accept' does not match 's'
		 * then breaks the loop
		 */
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (count);
}
