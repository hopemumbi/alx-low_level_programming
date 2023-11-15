#include <stdio.h>
/**
 *main - prints all possible different combinations
 *of two two digit numbers
 *Return: 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i != j && j > i)
			{
				if (j > 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

			}
		}
	}
	putchar('\n');
	return (0);
}
