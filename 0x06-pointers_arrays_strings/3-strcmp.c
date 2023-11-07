/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: len
 */
int _strcmp(char *s1, char *s2)
{
	/**
	 * loop continues as long as both strings are not at their null terminators
	 * and the characters at the current positions in both strings are equal.
	 */
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	/**loop exits coz strings are equal and returns 0**/
		if (*s1 == *s2)
		{
			return (0);
		}
	/**
	 * loop exits coz characters at the current positions are different
	 * returns the difference between the ASCII values of the two characters
	 **/
			return (*s1 - *s2);
}
