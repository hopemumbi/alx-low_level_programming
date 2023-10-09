#include <stdio.h>
/**
 * main - entry point
 * Return: always zero
 *
 */
int main(void)
{
	char lower;

	for (lower = 97; lower <= 122; lower++)
	{
		if (lower != 101 && lower != 113)
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
