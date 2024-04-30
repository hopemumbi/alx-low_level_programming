#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * print_f - Defines a function that prints 
 *
 * @specifier: A character that represents a data type
 * @print: A function pointer to a function that prints a data type
 */
typedef struct print_f
{
	char *specifier;
	void (*print)(va_list args);
} print_f;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
