/**
 * _strncpy - function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n:no of elements in array
 * Return:copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
/*If there is room left in dest, fill it with null characters.*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
