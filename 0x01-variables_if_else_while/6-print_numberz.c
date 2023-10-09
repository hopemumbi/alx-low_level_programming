#include <stdio.h>
/**
 * main- entry point
 * Return: always zero
 */
int main(void)
{
	char i;

	i = 48;
	do {
		putchar(i);
		i++;
	} while (i <= 57);
	putchar('\n');
	return (0);
}
