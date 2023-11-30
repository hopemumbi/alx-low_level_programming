#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_op_func - select the correct operation function asked by user
 * @s: operator argument
 *Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
	/**
	 * Define an array of structures,
	 * each containing an operator and its associated function
	 */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		/*Last element serves as a sentinel, indicating the end of the array*/
		{NULL, NULL}
	};
	int i = 0;

	/*Iterate through the array of structures to find the matching operator*/
	while (i < 5)
	{
		/**
		 * Compare the first character of the operator argument
		 * with the operators in the array
		 */
		if (ops[i].op[0] == s[0])
		{
			/*If a match is found, return the corresponding function pointer*/
			return (ops[i].f);
			i++;
		}
	}
	/**
	 * If no matching operator is found,return NULL
	 * (indicating an error or unsupported operator)
	 */
	return (NULL);
}
