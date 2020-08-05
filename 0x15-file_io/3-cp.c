#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *main - function main
 *@ac: input arguments
 *@av: Q of argumentes
 *Return: 0
 */
int main(int ac, char *av[])
	int main(int ac, char *av[])
{
	int file, file1;
	ssize_t r, w, c, c1;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	file1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	r = w = 1;
	while (r)
	{
		r = read(file, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]), exit(98);
		if (r > 0)
		{
			w = write(file1, buffer, r);
			if (w == -1)
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	c = close(file);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file), exit(100);
	c1 = close(file1);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	return (0);
}
