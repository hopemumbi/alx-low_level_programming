#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	/**print negative numbers**/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/**
	 * recursive function
	 * first checks if the number is greater than or equal to 10
	 * If it is, the function is called recursively with the integer divided by 10
	 * This effectively moves through the digits from left to right.
	 */
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	/**prints the last digit of the number**/
	_putchar((n % 10) + '0');
}
