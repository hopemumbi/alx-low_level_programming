#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-'); /* Print a '-' sign*/
		n = -n; /* Make the number positive */
	}
	/* Base case: if n is a single digit, print it */
	if (n / 10 != 0)
		print_number(n / 10); /* Recursively call print_number with n/10*/

	/* Print the last digit of n by adding '0' to convert it to ASCII */
	_putchar(n % 10 + '0');
}

