#include <stdio.h>
#include <stdlib.h>
/**
 * is_space - check for space
 *@c: string to be checked
 *Return: space
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 *strtow - splits a string into words.
 *@str: string to be split
 *Return: NULL if function fails; words otherwise
 */
char **strtow(char *str)
{
	int i, j, k, len = 0, word_count = 0;
	char **words;

	if (!str || !*str)/* Check str is NULL or an empty string*/
		return (NULL);

	for (i = 0; str[i]; i++)/*Count the number of words*/
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
			word_count++;
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	for (i = 0, j = 0; i < word_count; i++)
	{
		while (is_space(str[j]))
			j++;/*Skip leading spaces*/

		for (len = 0; str[j + len] && !is_space(str[j + len]); len++)
			;/*Calculate the length of the current word*/

		/*allocate memory for each word*/
		words[i] = malloc((len + 1) * sizeof(char));
		if (!words[i])/*If memory allocation fails*/
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		/*Copy the characters of the current word into the allocated memory*/
		for (k = 0; k < len; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';/*add nullterminator*/
		j += len;/*move to next word*/
	}
	words[word_count] = NULL;
	return (words);
}
