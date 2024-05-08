#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	/* Initialize the number to find the largest prime factor of */
	unsigned long num = 612852475143;
	/* Initialize the largest prime factor to 2, the smallest prime */
	unsigned long largest_prime_factor = 2;

	/*Continue until the number becomes 1 */
	while (num != 1)
	{
		/* If the current largest prime factor divides the number evenly */
		if (num % largest_prime_factor == 0)
			/* Divide the number by the largest prime factor */
			num = num / largest_prime_factor;
		else
			/* Else increment it */
			largest_prime_factor++;
	}
	/* Print the largest prime factor */
	printf("%lu\n", largest_prime_factor);
	return (0);
}

