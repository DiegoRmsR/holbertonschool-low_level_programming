#include "holberton.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters
 *
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, fdr, fdw;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	fdr = read(fd, buf, letters);
	if (fdr == -1)
		return (0);
	fdw = write(STDIN_FILENO, buf, fdr);
	if (fdw == -1)
	return (0);

	close(fd);
	free(buf);
	return (fdr);
}
