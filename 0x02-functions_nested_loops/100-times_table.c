#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0
 * the function should not print anything
 * @n: n times
 */
void print_times_table(int n)
{
	int i, j, times;

	if (n > 0 || n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				times =  i * j;
				if (j == 0)
				{
					_putchar(times + '0');
				}
				else if (times <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(times + '0');
				}
				else if (times < 100)
				{
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else
				{
					 _putchar((times / 100) + '0');
					 _putchar(((times / 10) % 10) + '0');
					 _putchar((times % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
