#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * return: always (0)
 */
void print_alphabet(void)
{
	int lower;

	lower = 97;
	while (lower <= 122)
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
