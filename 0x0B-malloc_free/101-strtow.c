#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count, i, len;

	count = 0;
	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		/**
		 *checks if the current character is not a space
		 * and(&&) either it is the first character in the string (i == 0)
		 * or the character before it is a space (str[i - 1] == ' ')).
		 */
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
	int i, j, k, word_count, word_len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	/*allocate memory*/
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < word_count; i++)
	{
		while (str[j] == ' ')
			j++;

		word_len = 0;
		while (str[j + word_len] != ' ' && str[j + word_len] != '\0')
			word_len++;

		words[i] = malloc((word_len + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
			words[i][k] = str[j + k];
		words[i][k] = '\0';

		j += word_len;
	}
	words[word_count] = NULL;

	return (words);
}
