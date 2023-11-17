#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	int n = 50;
	int i;
	unsigned long int fib[n];

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%lu, ", fib[i]);
	}
	printf("%lu\n", fib[n - 1]);
	return (0);
}
