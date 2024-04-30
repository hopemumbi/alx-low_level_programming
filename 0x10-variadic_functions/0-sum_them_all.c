#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 *
 * @n: The number of parameters.
 * @...: Variable number of parameters.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	/*Check if there are no parameters*/
	if (n == 0)
		return (0);

	/*Initialize the sum and start the variable argument list*/
	sum = 0;
	va_start(args, n);

	/*Loop through the parameters and calculate the sum*/
	for (i = 0; i < n; ++i)
		sum += va_arg(args, int);/*Add the next parameter to the sum*/

	/*Clean up the variable argument list*/
	va_end(args);

	/*Return the calculated sum*/
	return (sum);

}
