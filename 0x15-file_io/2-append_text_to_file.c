#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: number of arguments passed
 * @av: argument passed
 *
 * Return: 1 on success 0 on failure
 */

int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n"), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((b = read(from_fd, buf,1024)) > 0)
		if (write(to_fd, buf, b) != b)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);

	return (EXIT_SUCCESS);
}
