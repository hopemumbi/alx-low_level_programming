#include <stdlib.h>
#include <stdio.h>
/**
 * main - takes CL arguments, checks errors,
 * then calls the print_opcodes function.
 * @argc: Number of CL arguments.
 * @argv: Array of command line argument strings.
 * Return:Returns 0 on success,
 * 1 for incorrect number of arguments,
 * and 2 for a negative number of bytes.
 */
int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		/*Print the opcode in hexadecimal format*/
		printf("%02x", *((unsigned char *)main + i));
		/*Add a space if not the last byte*/
		if (i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
