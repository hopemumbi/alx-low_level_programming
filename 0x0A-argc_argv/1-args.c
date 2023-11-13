#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *@argc:argument count
 *@argv:argument vector
 *Return: 0 if successful
 */
int main(int argc, char **argv)
{
	/**This line explicitly states that the parameter is intentionally unused**/
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
