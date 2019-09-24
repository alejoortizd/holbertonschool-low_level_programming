#include "holberton.h"
/**
 * print_last_digit - Entry point
 *
 * @i: parametre to check.
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int n = i % 10;
	int m;

	if (n < 0)
		n = -n;
	m = '0' + n;
	_putchar(m);
	return (n);
}
