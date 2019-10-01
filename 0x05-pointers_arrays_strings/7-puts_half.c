#include "holberton.h"
/**
 * puts_half - entry point
 * Description: function that return the seconf half of the string
 * @str: parametre to check
 * Return: always a void
 */
void puts_half(char *str)
{
	int i, c, j;

	for (i = 0; str[i] != 0; i++)
		c++;
	if (c++ % 2 == 0)
		for (j = (c / 2); j <= c; j++)
			_putchar(str[j]);
	else
		for (j = ((c + 1) / 2); j <= c; j++)
			_putchar(str[j]);
	_putchar('\n');
}
