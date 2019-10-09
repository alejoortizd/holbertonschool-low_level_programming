#include "holberton.h"
/**
 * print_rev_recursion.c - Entry point
 * Description: Function that return the rev string
 * @s: String to check
 * @return: rev string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
