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
	if (c % 2 == 0)
		j = (c / 2);
	else
		j = ((c + 1) / 2);
	for (i = j ; i < c ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
