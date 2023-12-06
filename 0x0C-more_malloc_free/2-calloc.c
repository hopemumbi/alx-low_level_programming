#include <stdlib.h>
#include <string.h>
/**
 *_memset - fills memory with a constant byte.
 *@s:pointer to memory
 *@b:a constant byte
 *@n:number of bytes to fill
 *Return: 's'
 */
void *_memset(char *s, char b, unsigned int n)
{
	/*pointer to the memory area 's'*/
	char *ptr = s;

	/*counter : tracks the no of bytes filled*/
	unsigned int i;

	for (i = 0; i < n; i++)
		/*assign value b to location pointed to by 's' at index i*/
		s[i] = b;

	return (ptr);
}

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
	void *pptr;

	/*Check if nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*Allocate memory for nmemb * size elements and set to zero*/
	pptr =  malloc(nmemb * size);

	/*Check if malloc fails*/
	if (pptr == NULL)
		return (NULL);

	_memset(pptr, 0, nmemb * size);
	/*Memory is already set to zero due to calloc behavior*/
	return (pptr);
}
