#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@a: var
 *Return: 'last' digit
 */
int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}

