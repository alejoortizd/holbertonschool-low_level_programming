#include "holberton.h"
/**
 * _strchr - Entry point
 * Description: Function that return the memory area pinted
 * @s: parametre to check
 * @c: parametre to check
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for ( ; *(s + i) ; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
