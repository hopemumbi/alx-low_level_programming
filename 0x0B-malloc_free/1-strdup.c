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
	int i, length;

	if (str == NULL)
		return (NULL);

	/* Find the length of the string */
	length = 0;
	while(str[length] != '\0')
		length++;

	/*Allocate memory for the duplicate string */
	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	/*Copy the string to the newly allocated memory */
	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}
