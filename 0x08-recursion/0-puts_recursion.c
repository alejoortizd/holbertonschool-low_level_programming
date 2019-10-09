#include "holberton.h"
/**
 * _puts_recursion - Entry point
 * Description: Function that print a string
 * @s: string to check
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
