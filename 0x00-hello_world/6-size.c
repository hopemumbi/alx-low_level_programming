#include <stdio.h>
/**
 * main -  prints the size of various types.
 * Return: 0
 */
int main(void)
{
	/*
	 *format specifier %lu is used
	 *to match the type expected by 'sizeo'f which is of type 'size_t'
	 *which is an unsigned integer type
	 *%d is for signed integers
	 */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
