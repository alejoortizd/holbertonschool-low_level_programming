#include "holberton.h"
/**
 * append_text_to_file - Entry point
 * @filename: parameter to check
 * @text_content: parameter to check
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fdf = 0, frd = 0, i = 0, j = 0;

	if (filename == NULL)
		return (-1);
	fdf = open(filename, O_WRONLY | O_APPEND);
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
