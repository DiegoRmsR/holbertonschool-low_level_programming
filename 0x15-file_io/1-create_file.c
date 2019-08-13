#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: name of file to create
 * @text_content: null termined string to write
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fd = 0, fdw = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
			;
		fdw = write(fd, text_content, count);
		if (fdw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
