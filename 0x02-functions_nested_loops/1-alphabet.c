#include "holberton.h"

void print_alphabet(void)
{
	int a = 'a';
	int b = 'z';

	for( ; a <= b ; a++)
		_putchar(a);
	_putchar('\n');
}