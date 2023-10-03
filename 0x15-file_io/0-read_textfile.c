#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - prints it to the POSIX standard output.
 * @filename: char
 * @letters: size_t
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
