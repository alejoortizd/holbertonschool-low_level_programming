#include "holberton.h"
/**
 * main - Entry point
 * @argc: parameter to check
 * @argv: parameter to check
 * Return: a text file
 */
int main(int argc, char **argv)
{

	int fdf, fdt, rd, we, clf, clto;
	char buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
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
