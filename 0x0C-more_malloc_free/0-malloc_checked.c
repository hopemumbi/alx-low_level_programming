#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b:the size of the memory to allocate in bytes
 *Return: pointer to the allocated memory or exit with status 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	/*Allocate memory using malloc*/
	ptr = malloc(b);

	/*Check if malloc was successful*/
	if (ptr == NULL)
		exit(98);/*Exit with status 98 if memory allocation fails*/

	return (ptr);
}
