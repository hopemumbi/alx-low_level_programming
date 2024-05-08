/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string if the result can be stored in r,
 *         otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* Initialize variables */
	int len1 = 0, len2 = 0, carry = 0, sum = 0, max_len = 0;
	int digit1, digit2;
	char *ptr1 = n1, *ptr2 = n2, *result = r;

	/* Calculate lengths of n1 and n2 */
	while (*ptr1++)
		len1++;
	while (*ptr2++)
		len2++;

	/* Determine the maximum length among n1 and n2 */
	max_len = (len1 > len2) ? len1 : len2;

	/* Check if the result can be stored in r */
	if (size_r <= max_len + 1)
		return (0);

	/* Move pointers to the end of n1 and n2 */
	ptr1 = n1 + len1 - 1;
	ptr2 = n2 + len2 - 1;
	result += max_len + 1;
	*result-- = '\0'; /* Null-terminate the result string */

	/* Perform addition from right to left */
	while (ptr1 >= n1 || ptr2 >= n2 || carry)
	{
		digit1 = (ptr1 >= n1 ? *ptr1-- - '0' : 0);
		digit2 = (ptr2 >= n2 ? *ptr2-- - '0' : 0);
		sum = carry + digit1 + digit2;
		carry = sum / 10;
		*result-- = sum % 10 + '0';
	}

	return (result + 1); /* Return pointer to beginning of the result string */
}
