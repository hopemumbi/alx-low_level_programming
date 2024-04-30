#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * @...: Variable number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/*Retrieve the next integer from the variable argument list*/
		num = va_arg(args, int);

		/* Print the number*/
		printf("%d", num);

		/**
		 * Print the separator if not the last number
		 * If separator is NULL, don’t print it
		 */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	/*Clean up the variable argument list*/
	va_end(args);

	/*print a new line at the end*/
	printf("\n");
}
