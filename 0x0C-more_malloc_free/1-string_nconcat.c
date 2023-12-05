#include <stdlib.h>
#include "main.h"
/**
 * _strlen - length of a string
 * @str: string to be checked
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: pointer to concated string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < len1; i++)
			concat[i] = s1[i];

	if (s2 != NULL)
		for (i = 0; i < len2 && i < n; i++)
			concat[len1 + i] = s2[i];

	concat[len1 + n] = '\0';

	return (concat);
}
