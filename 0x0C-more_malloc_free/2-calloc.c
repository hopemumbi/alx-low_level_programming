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

	/*Check if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Allocate memory for nmemb * size elements and set to zero*/
	ptr =  malloc(nmemb * size);

	/*Check if malloc fails*/
	if (ptr == NULL)
		return (NULL);

	/*Memory is already set to zero due to calloc behavior*/
	return (ptr);
}
