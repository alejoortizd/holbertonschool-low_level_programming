#include "holberton.h"
/**
 * _memcpy - Entry point
 * Description: Function that return the memory area pinted
 * @n: parametre to check
 * @dest: parametre to check
 * @src: parametre to check
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
