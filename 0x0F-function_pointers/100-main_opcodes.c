#include <stdlib.h>
#include <stdio.h>

void print_opcodes(int bytes);
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
	int bytes;

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

	print_opcodes(bytes);

	return (0);
}
/**
 * print_opcodes - takes a pointer to a function and prints the opcodes
 * @bytes: Number of opcodes to print.
 */
void print_opcodes(int bytes)
{
	int i;
/*Pointer to the main function (print_opcodes in this case)*/
	char *p = (char *)print_opcodes;

	for (i = 0; i < bytes; i++)
	{
		/*Print the opcode in hexadecimal format*/
		printf("%02x", (unsigned char)p[i]);
		/*Add a space if not the last byte*/
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}
