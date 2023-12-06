#include <stdlib.h>
/**
 *_calloc -  allocates memory for an array, using malloc.
 *@nmemb: no of elements in an array
 *@size: size of each element in bytes
 *
 *Return: returns a pointer to the allocated memory.
 *        NULL if nmemb or size is 0
 *        NULL if malloc fails, t
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr =  malloc(nmemb * size);

	if (ptr == 0)
		return (NULL);

	return (ptr);
}
