#include <stdlib.h>
#include <stdio.h>/*Include the standard library for atoi function*/
#include <ctype.h>/*Include ctype.h for isdigit function*/
/**
 *main -  adds positive numbers.
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if successful, 1 if error
 */
int main(int argc, char **argv)
{
	int i, j, add = 0;

	/*Check if no numbers are passed to the program*/
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	/*Loop through command-line arguments starting from index 1*/
	for (i = 1; i < argc; i++)
	{
		/*
		 * goes through each character of (argv[i])
		 * until it encounters the null terminator '\0'
		 */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/*
			 * checks if the current character is not a digit.
			 *If true, it prints an error message and returns 1.i
			 */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*Convert the entire argument to an integer and add it to the total*/
		add += atoi(argv[i]);
	}
	printf("%d\n", add);

	return (0);
}
