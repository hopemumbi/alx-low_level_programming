#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		/* Loop through each row of the triangle */
		for (i = 1; i <= size; i++)
		{
			/* Print spaces for the left padding */
			for (j = size - i; j > 0; j--)
				_putchar(' ');

			/* Print the hashes for the triangle */
			for (j = 0; j < i; j++)
				_putchar('#');

			/* Move to the next line if not the last row */
			if (i != size)
				_putchar('\n');
		}
	}
	/* Print a newline character at the end */
	_putchar('\n');
}

