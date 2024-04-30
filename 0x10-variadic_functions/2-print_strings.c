#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings
 * @n:the number of strings passed to the function
 * @...: variable number of parameters.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/*Retrieve the next string from the variable argument list*/
		char *s = va_arg(args, char *);

		/*Check if the string is NULL before printing*/
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		/*Print the separator if not the last string and separator is not NULL */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
