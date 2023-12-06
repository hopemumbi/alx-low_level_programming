#include "main.h"
#include <limits.h>
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

	while (s[i] == ' ')
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		sign = 1;
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
