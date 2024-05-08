#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, next;
	unsigned long a_half1, a_half2, b_half1, b_half2;
	unsigned long half1, half2;

	/* Print the first 92 Fibonacci numbers */
	for (i = 0; i < 92; i++) /* Print the first 92 */
	{
		next = a + b; /*Calculate the next Fib number in sequence*/
		printf("%lu, ", next);
		a = b; /* Update variables for the next iteration*/
		b = next;
	}
	/* Split the last two Fibonacci numbers into halves to handle large numbers */
	a_half1 = a / 10000000000;
	b_half1 = b / 10000000000;
	a_half2 = a % 10000000000;
	b_half2 = b % 10000000000;
	/* Calculate and print the last 6 Fibonacci numbers */
	for (i = 93; i < 99; i++)
	{
		half1 = a_half1 + b_half1;
		half2 = a_half2 + b_half2;
		if (a_half2 + b_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		/* Update the halves for the next iteration */
		a_half1 = b_half1;
		a_half2 = b_half2;
		b_half1 = half1;
		b_half2 = half2;
	}

	printf("\n");
	return (0);
}
