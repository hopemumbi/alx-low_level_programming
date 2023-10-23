#include "main.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign, result, digit;

	sign = 1;
	result = 0;
	digit = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + s[i] - '0';
			digit = 1;
		}
		else if (result > 2147483647 || result < -2147483647)
		{
			return ((sign == 1) ? 2147483647 : -2147483648);
		}
		else if (digit)
		{
			break;
		}
	}
	return (sign * result);
}
