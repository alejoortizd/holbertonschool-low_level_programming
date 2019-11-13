#include "holberton.h"
/**
 * read_textfile - Entry point
 * @filename: parameter to check
 * @letters: parameter to check
 * Return: a text file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fdf = 0;
	ssize_t ctcomp = 0, i = 0;
	void *buffer;

	if (filename == NULL)
		return (0);
	fdf = open(filename, O_RDONLY, 0600);
	if (fdf == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	ctcomp = read(fdf, buffer, letters);
	if (ctcomp == -1)
	{
		free(buffer);
		close(fdf);
		return (0);
	}
	i = write(STDOUT_FILENO, buffer, ctcomp);
	if (i == -1 || i != ctcomp)
	{
		free(buffer);
		close(fdf);
		return (0);
	}
	free(buffer);
	close(fdf);
	return (i);
}
