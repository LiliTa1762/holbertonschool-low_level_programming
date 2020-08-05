#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *create_file - function to create file
 *@filename: name of the file to create
 *@text_content: write to the file
 *Return: 1, -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, counter, wt;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		for (counter = 0; text_content[counter] != '\0'; counter++)
			;
	}

	wt = write(fp, text_content, counter);
	if (wt < 0)
		return (-1);

	close(fp);
	return (1);
}
