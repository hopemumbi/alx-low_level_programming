#include "main.h"
/**
 * print_line - draw a straight line
 * @n: int
 */
void print_line(int n)
{
	int m = 0;

	while (m < n)
	{
		_putchar(95);
		m++;
	}
	_putchar('\n');
}
