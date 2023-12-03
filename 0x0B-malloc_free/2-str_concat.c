#include "main.h"
#include <stdlib.h>
/**
 *_strcat - Concatenate two strings using malloc.
 *@s1: The first string.
 *@s2: The second string.
 *Return: A pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1, len2;

	 /* Check for NULL pointers */
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* Calculate the length of the first string */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	/*Calculate the length of the second string*/
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + len2 + 2) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + len2] = '\0';

	return (concat);
}
