#include "main.h"
/**
 * str_len - calculates the length of a string
 * @s: string to calculate length for
 * Return: length of the string
 */
int str_len(char *s)
{
	/**if the current character is the null terminator, return 0**/
	if (*s == '\0')
		return (0);

	/**move to the next character and add 1 to the length**/
	return (1 + str_len(s + 1));
}

/**
 * counter - helper function for palindrome checking
 * @ss: string to check
 * @length: length of the string
 * @count: counter for recursive calls
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int counter(char *ss, int length, int count)
{
	/**if the counter has exceeded or reached the length, it's a palindrome**/
	if (count >= length)
		return (1);

	/**Check if the characters at the corresponding positions are the same**/
	if (ss[length] == ss[count])
	/**move to the next pair of characters**/
		return (counter(ss, length - 1, count + 1));

	/**characters are not the same, it's not a palindrome**/
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if a string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	/**Calculate the length of the string**/
	int length = str_len(s);
	/**Initialize the counter for recursive calls**/
	int count = 0;

	/**Call the helper function to perform the palindrome check**/
	return (counter(s, length - 1, count));
}
