#include "holberton.h"
/**
 * _strncpy - Entry point
 * Description: function that cancatenates two strings
 * @dest: parametre to check
 * @src: parametre to check
 * @n: parametre to check
 * Return: always dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, w;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] == s2[i])
			w = s1[i] - s2[i];
		else
		{
			w = s1[i] - s2[i];
			break;
		}
	return (w);
}
