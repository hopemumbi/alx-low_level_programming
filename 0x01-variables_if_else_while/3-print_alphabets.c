#include <stdio.h>
/**
 * main - entry point
 * lower: lower case letter
 * upper: upper case letter
 * Return: always (o)
 */
int main(void)
{
	char alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 65; alpha <= 90; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
