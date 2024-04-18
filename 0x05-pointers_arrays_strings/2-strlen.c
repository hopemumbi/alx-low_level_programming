/**
 * _strlen - calculates the length of a string.
 *
 * @s: a pointer to the string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	/* Initialize a variable to store the length of the string */
	int count = 0;
	/* Iterate through the string until reaching the null terminator */
	while (*s != '\0')
	{
		/* Increment the length for each character in the string */
		count += 1;
		s++;
	}
	/* Return the length of the string */
	return (count);
}
