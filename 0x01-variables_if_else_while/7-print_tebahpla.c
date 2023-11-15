#include <stdio.h>
/**
 * main -entry point
 * lower - our variable
 * Return: (0)
 */
int main(void)
{
	char lower;

	lower = 'z';
	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
