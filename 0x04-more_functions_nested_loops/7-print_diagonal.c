#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
	int i, j;

	/*If n is 0 or less, just print a newline and return*/
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	/* Loop to print the diagonal line */
	for (i = 0; i < n; i++)
	{
		/* Print spaces before the '\' */
		for (j = 0; j < i; j++)
			_putchar(' ');
		/* Print the '\' */
		_putchar(92);
		/* Move to the next line*/
		_putchar('\n');
	}
}
