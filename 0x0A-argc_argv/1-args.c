#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *@argc:argument count
 *@argv:argument vector
 *Return: 0 if successful
 */
int main(int argc, char **argv)
{
	**argv = **argv;
	printf("%d\n", argc);
	return (0);
}
