#include "main.h"
/**
 * sqrt_guesser -  recursively returns the natural square root.
 * @n: the number to be square rooted
 *@guess: current guess for the square root
 * Return: the square root  -1 otherwise
 */
int sqrt_guesser(int n, int guess)
{
	/**if the guess squared '=' original number, return the guess**/
	if (guess * guess == n)
	{
		return (guess);
	}
	/**If guess squared '>' original number, there's no natural square root**/
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_guesser(n, guess + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number to be square rooted
 * Return: -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_guesser(n, 0));
}
