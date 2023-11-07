#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: char
 */
void puts2(char *str)
{
	int i;

	/*Increment the index by 2 to skip every other character.*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		putchar(str[i]);
	}
	putchar('\n');

}
