#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr:  a pointer to the memory previously allocated with malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return:pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;/*Pointer to the new memory*/
	char *pptr = ptr;/*Pointer to the old memory*/
	unsigned int i;/*loop variable*/

	/*if new_size is 0 && ptr is not NULL*/
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/*If ptr is NULL, equivalent to malloc(new_size)*/
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is equal to old_size, return the original pointer*/
	if (new_size == old_size)
		return (ptr);

	/*Allocate memory for the new_size*/
	new_ptr = malloc(new_size);

	/*Check if malloc fails*/
	if (new_ptr == NULL)
		return (NULL);

	/*copy contents to new space*/
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = pptr[i];

	/*Free old memory*/
	free(ptr);

	return (new_ptr);
}
