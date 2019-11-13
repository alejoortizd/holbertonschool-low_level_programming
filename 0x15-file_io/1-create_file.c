#include "holberton.h"
/**
 * create_file - Entry point
 * @filename: parameter to check
 * @text_content: parameter to check
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{

	int fdf = 0, frd = 0, i = 0, j = 0;

	if (filename == NULL)
		return (-1);
	fdf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fdf == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		frd = write(fdf, text_content, i);
		if (frd == -1)
			return (-1);
	}
	j = close(fdf);
	if (j == -1)
		return (-1);
	return (1);
}
