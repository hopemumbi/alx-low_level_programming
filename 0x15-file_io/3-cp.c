#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 1024
/**
 *main - copies the content of a file to another file.
 *@ac: argument count
 *@av: argument vector
 *
 * Return: 0 if successful
 */
int main(int ac, char **av)
{
	int o_from, o_to;
	char buffer[1024];
	ssize_t read_from, written_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o_from = open(av[1], O_RDONLY);

	o_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (o_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(o_from);
	}

	read_from = read(o_from, buffer, 1024);
	written_to = write(o_to, buffer, read_from);

	if ((o_from == -1) || (read_from == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if ((o_to == -1) || (written_to == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	if ((close(o_from) == -1) || (close(o_to) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}
	return (0);
}
