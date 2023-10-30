#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes = 0, write_bytes = 0;
	char *text = NULL;
		if (filename == NULL)
			return (0);
	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
	text = malloc(sizeof(char) * (letters + 1));
		if (text == NULL)
			return (0);
	bytes = read(fd, text, letters);
		if (bytes == -1)
		{
			free(text);
			close(fd);
			return (0);
		}
	text[bytes] = '\0';
	write_bytes = write(STDOUT_FILENO, text, bytes);
		if (write_bytes == -1 || write_bytes != bytes)
		{
			free(text);
			close(fd);
			return (0);
		}

	free(text);
	close(fd);

	return (write_bytes);
}
