#include "holberton.h"
/**
 * _strlen_recursion - Entry point
 * Description: Funtion that return the length
 * @s: String to check
 * Return: c
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
