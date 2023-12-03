#include "main.h"
#include <stdlib.h>
/**
 *str_concat - Concatenate two strings using malloc.
 *@s1: The first string.
 *@s2: The second string.
 *Return: A pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL && s2 == NULL)/* Check for NULL pointers */
		return (NULL);

	if (s1 != NULL)/*length of the first string */
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)/*length of the second string */
		while (s2[len2] != '\0')
			len2++;

	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + len2 + 1) * sizeof(char));

	/*check if dynamic memory allocation using malloc was successful*/
	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < len1; i++)
			concat[i] = s1[i];

	if (s2 != NULL)
		for (i = 0; i < len2; i++)
			concat[len1 + i] = s2[i];

	concat[len1 + len2] = '\0';

	return (concat);
}
