#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename:the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	/* check if file name is NULL */
	if (filename == NULL)
		return (-1);

	/*
	 * O_APPEND - each write operation appends data to the end of the file
	 * O_WRONLY - open the file in write-only mode.
	 */
	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	/*If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		w = write(o, text_content, strlen(text_content));

		if (w == -1)
		{
			close(o);
			return (-1);
		}
	}

	close(o);
	return (1);
}
