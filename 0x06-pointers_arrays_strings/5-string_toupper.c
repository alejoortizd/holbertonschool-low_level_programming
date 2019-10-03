#include "holberton.h"
/**
 * string_toupper - Entry point
 * Description: toUppercase
 * @c: parametre to check
 * Return: always c
 */
char *string_toupper(char *c)
{
	int i = 0;

	for ( ; c[i] != 0; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}
	return (c);
}
