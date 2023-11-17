#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@a: a number
 *Return: 'last' digit
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar((-a % 10) + '0');
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}

