#include "main.h"
/**
 * _pow_recursion -returns the value of x raised to the power of y.
 * @x: the base value
 * @y: its exponent power
 * Return: -1 if y < 0 or power
 */
int _pow_recursion(int x, int y)
{
	/**If the exponent is negative, return -1 **/
	if (y < 0)
	{
		return (-1);
	}
	/**If the exponent is 0, return 1**/
	if (y == 0)
	{
		return (1);
	}
	/**If the exponent is 1, return the base value (x).**/
	if (y == 1)
	{
		return (x);
	}
	/**calculates x^y by reducing the exponent by 1 in each recursive call.**/
	return (x * _pow_recursion(x, y - 1));
}
