#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}