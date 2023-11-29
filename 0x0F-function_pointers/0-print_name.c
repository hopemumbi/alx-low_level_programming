#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - calls a function pointed to by f with the provided name
 *@name: the name to be printed
 * @f: a function pointer to a function - takes a char pointer as an argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
