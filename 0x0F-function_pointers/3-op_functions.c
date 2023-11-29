#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *op_add - add two integers
 *@a: first integer
 *@b: second integer
 *Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - add two integers
 *@a: first integer
 *@b: second integer
 *Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - add two integers
 *@a: first integer
 *@b: second integer
 *Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - add two integers
 *@a: first integer
 *@b: second integer
 *Return: the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - add two integers
 *@a: first integer
 *@b: second integer
 *Return: the modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
