#include "holberton.h"
/**
 * _strcat - Entry point
 * Description: function that cancatenates two strings
 * @dest: parametre to check
 * @src: parametre to check
 * Return: always dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[j] != 0; j++, i++)
		dest[i] = src[j];
	return (dest);
}
