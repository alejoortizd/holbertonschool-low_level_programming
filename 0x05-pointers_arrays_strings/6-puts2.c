#include "holberton.h"
/**
 * puts2 - entry point
 * Description: function that prints all odd
 *
 * Return: always void
 */
void puts2(char *str)
{
	int a = 0;

	while (*str)
	{
		if (a++ % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
