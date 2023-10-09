#include <stdio.h>
/**
 *main - entry point
 *Return: always zero
 *
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
		putchar('\n');
	return (0);
}
