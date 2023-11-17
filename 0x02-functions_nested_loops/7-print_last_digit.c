#include "main.h"
/**
 *print_last_digit - prints the last digit of a number.
 *@a: a number
 *Return: 'last' digit
 */
int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}

