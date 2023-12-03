#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - Duplicate a string using malloc.
 *@str: The string to duplicate.
 *
 *Return: A pointer to the duplicated string or NULL on failure.
 */
char *_strdup(char *str)
{
	char *dup;
	int length;

	if (str == NULL)
		return (NULL);

	/* Find the length of the string */
	length = strlen(str);

	/*Allocate memory for the duplicate string */
	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	/*Copy the string to the newly allocated memory */
	strcpy(dup, str);

	return (dup);
}
