#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * ...and initializes it with a specific char
 * @size: the size of the array
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	/*Returns NULL if size = 0*/
	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	/*Returns a pointer to the array, or NULL if it fails*/
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
