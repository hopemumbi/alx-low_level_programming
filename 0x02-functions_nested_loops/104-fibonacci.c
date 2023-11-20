#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	/*Declare variables to store Fibonacci numbers*/
	int i;
	unsigned long int a, b, next;

	/*Initialize the first two Fibonacci numbers*/
	a = 1;
	b = 2;
	/*Print the first two Fibonacci numbers*/
	printf("%lu, %lu, ", a, b);
	/*Generate and print the next 96 Fibonacci numbers*/
	for (i = 2; i < 98; i++)
	{
		/*Calculate the next Fibonacci number in the sequence*/
		next = a + b;
		/* Update variables for the next iteration*/
		a = b;
		b = next;
		/*Print the current Fibonacci number*/
		printf("%lu, ", next);
	}
	printf("\n");
	return (0);
}
