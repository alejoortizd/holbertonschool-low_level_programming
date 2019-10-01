#include "holberton.h"
/**
 * _strcpy - Entry point
 * Description: function
 * @dest: parametre to check
 * @src: parametre to check
 * Return: always dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if ((src[i + 1] == '\0'))
			dest[i + 1] = src[i + 1];
		i++;
	}
	return (dest);
}
