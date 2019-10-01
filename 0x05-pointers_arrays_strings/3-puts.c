#include "holberton.h"
/**
 * _puts - Entry point
 * Description: function that print a string
 * @str: parametre to check
 * Returns: always void
 */
void _puts(char *str)
{

	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
