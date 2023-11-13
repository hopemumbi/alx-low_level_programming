#include <stdio.h>
/**
 *main - entry point
 *Return: 0 to indicate successful execution
 *@argc: is the count of command-line arguments
 *@argv: is an array of strings containing the arguments
 */
int main(int argc, char *argv[])
{
	int i;

	/*Loop through each command-line argument*/
	for (i = 0; i < argc; i++)
	{
		/*Print each argument*/
		printf("%s\n", argv[i]);
	}
	return (0);
}
