#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * create_file - create a function that creates a file
 * @text_content: content to write to the file
 * @filename: name of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int written_bytes = 0, len = 0;


		if (filename == NULL)
			return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		written_bytes = write(fd, text_content, len);
		if (written_bytes != len)
		{
			close(fd);
			return (-1);

		}
	}

	close(fd);
	return (1);
}
