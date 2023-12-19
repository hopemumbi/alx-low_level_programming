#include "dog.h"
#include <stdio.h>
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
	while (str[length] != '\0')
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
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/*allocate memory for the new structure*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/*allocate memory for the name string and copy the data*/
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/*allocate memory for the owner string and copy the data*/
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		/*free the previously allocated memory if strdup fails*/
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
