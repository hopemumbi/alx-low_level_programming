#include "main.h"
/**
 *_memcpy - copies memory area.
 *@dest: mem area to be copied to
 *@src: mem area to be copied from
 *@n: no of bytes to be copied from 'src' to 'dest'
 *Return: 'ptr' pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/** pointer to keep track of 'dest'**/
	char *ptr = dest;
	/** counter:**/
	unsigned int i;

	/**iterates from i = 0 to n - 1**/
	for (i = 0; i < n; i++)
	{
		/** copies ith element in 'src' to 'dest' **/
		dest[i] = src[i];
	}
	return (ptr);
}
