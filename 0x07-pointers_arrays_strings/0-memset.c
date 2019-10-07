#include "holberton.h"
/**
 * _memset - Entry point
 * Description: Function that return the memory area pinted
 * @n: parametre to check
 * @s: parametre to check
 * @b: parametre to check
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
