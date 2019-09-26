#include "holberton.h"
/**
 * print_most_numbers - Function that print 0 - 9
 * Description: Function that not print 2 and 4
 * Return: 0-9
 */
void print_most_numbers(void)
{
	int c = 0;

	for ( ; c < 10 ; c++)
	{
		if (c == 2 || c == 4)
			c++;
		_putchar(c + '0');
	}
	_putchar('\n');
}
