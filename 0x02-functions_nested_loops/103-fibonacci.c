#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	unsigned long int fib[50], sum = 0;

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		if (fib[i] < 4000000 && fib[i] % 2 == 0)
		{
			sum += fib[i];
		}
	}
	printf("%lu\n", sum);
	return (0);
}
