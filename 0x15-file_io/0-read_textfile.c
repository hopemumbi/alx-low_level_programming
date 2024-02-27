#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of file
 *@letters: no of letters in file
 *
 *Return: the written bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t read_b, written_b;

	if (filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	read_b  = read(fd, buff, letters);
	if (read_b == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	buff[read_b] = '\0';

	written_b = write(1, buff, read_b);
	if ((written_b == -1) || (written_b != read_b))
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (written_b);
}
