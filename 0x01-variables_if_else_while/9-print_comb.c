#include <stdio.h>
/**
 * main - entry point
 * Return: always (0)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	return (0);
}
