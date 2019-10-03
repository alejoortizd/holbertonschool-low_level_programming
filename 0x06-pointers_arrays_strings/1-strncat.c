#include "holberton.h"
/**
 * _strncat - Entry point
 * Description: function that cancatenates two strings
 * @dest: parametre to check
 * @src: parametre to check
 * @n: parametre to check
 * Return: always dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, j;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; j < n && src[j] != 0; j++, i++)
		dest[i] = src[j];
	return (dest);
}
