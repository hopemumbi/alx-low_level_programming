#include "main.h"
/**
 *factorial - returns the factorial of a given number.
 *@n: no to be factored
 *Return: -1 if n<0 or the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
