#include "holberton.h"
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return(0);
	else
		return (1);
	_putchar('\n');
}
