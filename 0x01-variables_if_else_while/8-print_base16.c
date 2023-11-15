#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 */
int main(void)
{
	int hex;
	char hexx

	for (hex = 48; hex <= 57; hex++)
	{
		putchar(hex);
	}
	for (hexx = 'a'; hexx <= 'f'; hexx++)
	{
		putchar(hexx);
	}
	putchar('\n');
	return (0);
}
