#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	/*
	 *@1: where the data will be written.1 represents the standard output.
	 *@&c: The address of the character c
    	 *@!: number of bytes to write. 1 for one character at a time.
      	 */
	return (write(1, &c, 1));
}
/**
 * main - prints to rtd output
 * without any functions listed in the NAME section
 * of (3) printf or man (3) puts
 * Return: 1 if successful
 */
int main(void)
{
	int i;

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
		return (1);
}
