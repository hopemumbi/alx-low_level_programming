#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_b;

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (-1);

	/**
	 * O_CREAT - create the file if it doesn't exist
	 * O_TRUNC - truncate the file if it already exists
	 * O_WRONLY - open the file in write-only mode.
	 * S_IRUSR | S_IWUSR - set the file permissions to rw-------
	 */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/*If text_content is not NULL, write it to the file*/
	if (text_content != NULL)
	{
		written_b = write(fd, text_content, strlen(text_content));
		/*If write fails, close the file and return -1*/
		if (written_b == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/*Close the file and return 1 to indicate success*/
	close(fd);
	return (1);
}
