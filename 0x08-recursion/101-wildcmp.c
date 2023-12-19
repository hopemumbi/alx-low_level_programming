/**
 *wildcmp - compares two strings
 *@s1:the first string
 *@s2:the second string with wildcards(s)
 *
 *Return:1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
	{
		/*If the current characters match, move to the next character*/
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If s2 has a wildcard (*) */
	if (*s2 == '*')
	{
		/* Try to match the rest of the strings */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}

	/* If no match is found, return 0 */
	return (0);
}
