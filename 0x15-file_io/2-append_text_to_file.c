#include "holberton.h"

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *append_text_to_file
 *@filename:
 *@text_content:
 *Return: 1, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 00600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i]; i++)
		;

	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);

	return (1);
}
