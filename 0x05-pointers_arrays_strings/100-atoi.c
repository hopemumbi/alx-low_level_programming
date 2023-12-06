#include "main.h"
#include <limits.h>
/**
 * _atoi -  convert a string to an integer.
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign, result, overflow;

	sign = 1;
	result = 0;
	overflow = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			{
				overflow = 1;
				break;
			}
			result = result * 10 + s[i] - '0';
		}
		else if (overflow || (result != 0 && (s[i] < '0' || s[i] > '9')))
		{
			break;
		}
	}
	return (sign * result);
}
