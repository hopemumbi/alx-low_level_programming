#include <stdio.h>
/**
 * main - entry point
 * Return: always zero
 *
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
