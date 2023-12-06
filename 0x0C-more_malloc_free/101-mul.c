#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * _isdigit - checks for a digit
 * @s: string to  be checked
 * Return: 1 if c is a digit or 0 if not a digit
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			return (1);
		s++;
	}
		return (0);
}
/**
 * _atoi -  convert a string to an integer.
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (s[i] == ' ' || (s[i] == '-' || s[i] == '+'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10
			|| (result == INT_MAX / 10
			&& s[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + (s[i++] - '0');
	}
	return (sign * result);
}
/**
 * main - multiplies two positive numbers.
 * @argc: no of arguments
 * @argv: position of argument
 *
 * Return: the product
 */
int main(int argc, char **argv)
{
	int product;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	product = _atoi(argv[1]) * _atoi(argv[2]);
	while (product)
	{
		putchar(product % 10 + '0');
		product = product / 10;
	}
	putchar('\n');

	return (0);

}
