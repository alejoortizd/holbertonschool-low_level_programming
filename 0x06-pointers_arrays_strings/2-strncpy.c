#include "holberton.h"
/**
 * _strncpy - Entry point
 * Description: function that cancatenates two strings
 * @dest: parametre to check
 * @src: parametre to check
 * @n: parametre to check
 * Return: always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
