#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints a char
 *
 * @args: A list of arguments; format specifiers
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 *
 * @args: A list of arguments; format specifiers
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float number
 *
 * @args: A list of arguments; format specifiers
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_str - prints a string
 *
 * @args: A list of arguments; format specifiers
 */
void print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	
	printf("%s", str);
}

/**
 * print_all - that prints anything.
 *
 * @format:  list of types of arguments passed to the function
 * ...: other variables
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	const char *separator = "";

	/* Array of structs to map format specifiers to print functions*/
	print_f flist[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
	};

	/* Start processing variable arguments */
	va_start(args, format);

	/* Loop through each character in the format string */
	while (format && format[i] != '\0')
	{
		j = 0; /* Reset inner loop counter */

		/* Check for matching specifier in the flist array*/
		while (j < 4 && (format[i] != *(flist[j].specifier)))
			j++;

		/* If a matching specifier is found */
		if (j < 4)
		{
			/*Print separator except for the first element*/
			printf("%s", separator);
			/*Call the corresponding print function from flist based on the specifier*/
			flist[j].print(args);
			/*Update separator for subsequent elements*/
			separator = ", ";
		}
		/* Move to the next character in the format string */
		i++;
	}
	va_end(args);
	printf("\n");
}
