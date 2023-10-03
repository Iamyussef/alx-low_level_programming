#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"
#include <string.h>
/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, size = strlen(text_content);

		if (filename == NULL)
			return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (size)
			bytes = write(fd, text_content, size);
	close(fd);
	return (bytes == size ? 1 : -1);
}
