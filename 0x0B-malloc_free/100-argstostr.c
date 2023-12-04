#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - Concatenates all the arguments of the program.
 *@ac: Number of arguments.
 *@av: Array of arguments.
 *Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	char *concat;

	/*check if if ac is 0 or if av is NULL*/
	if (ac == 0 || av == NULL)
		return (NULL);

	/*calculate the total length of the concatenated string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		/*increments length to account for the newline character*/
		length++;
	}

	/*Allocate memory for the concatenated string*/
	concat = malloc((length + 1) * sizeof(char));/*+1 for null terminator*/

	if (concat == NULL)/*check if memory allocation was successful*/
		return (NULL);

	/*Copy the arguments into the concatenated string*/
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[length] = av[i][j];
			length++;
		}

		concat[length] = '\n';/*add newline*/
		length++;
	}

	concat[length] = '\0';/*add null terminator*/
	return (concat);
}
