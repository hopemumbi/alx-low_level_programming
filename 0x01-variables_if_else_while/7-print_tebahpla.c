#include <stdio.h>
/**
 * main -entry point
 * lower - our variable
 * Return: (0)
 */
int main(void)
{
	char lower;

	lower = 122;
	while (lower >= 97)
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
