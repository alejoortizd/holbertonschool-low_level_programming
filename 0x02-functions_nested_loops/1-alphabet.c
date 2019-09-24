#include "holberton.h"
/**
 * print_alphabet - entry point
 *
 * Description: Prints alphabet with _putchar
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int a = 'a';
	int b = 'z';

	for ( ; a <= b ; a++)
		_putchar(a);
	_putchar('\n');
}
