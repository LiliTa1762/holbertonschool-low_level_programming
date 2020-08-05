#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *read_textfile - function that reads a file
 *@filename: variable pointer char const
 *@letters: number of letters
 *Return: 0, pointer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *tx;
	ssize_t rd, wt;

	if (filename == NULL)
		return (0);

/* Open filename */
	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

/* Allocate memory */
	tx = malloc(sizeof(char) * letters);
	if (tx == NULL)
	{
		close(fp);
		return (0);
	}

/* Read */
	rd = read(fp, tx, letters);
	close(fp);

	if (rd == -1)
	{
		free(tx);
		return (0);
	}

/* Write */
	wt = write(STDOUT_FILENO, tx, rd);
	free(tx);

	if (wt != rd)
		return (0);

	return (wt);
}
