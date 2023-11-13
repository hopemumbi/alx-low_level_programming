#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * Return: 0 if successful
 * @argc: argument count (the number of command-line arguments)
 * @argv: argument vector
 */
int main(int argc, char **argv)
{
	int i;

	/*Loop through each command-line argument*/
	for (i = 0; i < argc; i++)
	{
		/*Print each argument followed by a newline*/
		printf("%s\n", argv[i]);
	}
	return (0);
}
