#include "holberton.h"
/**
 * print_line - Entry point
 * Descripcion: function that prints a straight line
 * @n: parametre to check
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	for ( ; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
