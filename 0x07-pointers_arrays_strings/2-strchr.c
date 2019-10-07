#include "holberton.h"
/**
 * _strchr - Entry point
 * Description: Function that return the memory area pinted
 * @n: parametre to check
 * @dest: parametre to check
 * @src: parametre to check
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0 && s[i] != c ; i++)
		;
	return (s + i);
}
