#include "main.h"
/**
 * print_line - draw a straight line
 * @n: int
 */
void print_line(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	_putchar(92);
	_putchar('\n');
	}
}
