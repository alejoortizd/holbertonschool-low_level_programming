#include "holberton.h"
/**
 * print_numbers - Entry point
 * Description: function that print from 0 to 9
 * Return: always c
 */
void print_numbers(void)
{
	int c = 0;

	for ( ; c < 10; c++)
		_putchar(c + '0');
	_putchar('\n');
}
