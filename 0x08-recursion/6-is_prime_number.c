#include "main.h"
/* Function prototype for prime_checker */
int prime_checker(int n, int guess);
/**
 *is_prime_number - checks for prime numbers
 *@n: prime or not
 *Return:  1 if the input integer is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/**2 is a prime number**/
	if (n == 2)
		return (1);
	/**0, 1, and even numbers (except 2) are not prime**/
	if (n <= 1 || n % 2 == 0)
		return (0);
	/**Call the recursive helper function with the initial guess of 3**/
	return (prime_checker(n, 3));
}
/**
 *prime_checker - recursive helper function to check
 *@n: the number to check
 *@guess: the current guess for potential divisors
 *Return: 1 if prime, 0 otherwise
 */
int prime_checker(int n, int guess)
{
	/**
	 *If n is not a prime number, it can be factored into a and b,
	 *such that n = a * b.
	 *If both a and b were greater than the square root of n,
	 *their product (a * b) would be greater than n.
	 *If n is a prime number, its only factors are 1 and itself
	 *guess * guess > n will eventually become true as the recursion progresses
	 */
	if (guess * guess > n)
		return (1);
	/**if n is divisible evenly by the current guess, it's not prime**/
	if (n % guess == 0)
		return (0);
	/**increment the guess by 2 and call the function again**/
	return (prime_checker(n, guess + 2));
}
