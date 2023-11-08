#include "main.h"
/**
 *_memset - fills memory with a constant byte.
 *@s:pointer to memory
 *@b:a constant byte
 *@n:number of bytes to fill
 *Return: 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	/**pointer to the memory area 's'**/
	char *ptr = s;
	/**counter : tracks the no of bytes filled**/
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/**
		 * assign value b to location pointed to by 's'
		 *at the index 'i'
		 */
		s[i] = b;
	}
	return (ptr);
}
