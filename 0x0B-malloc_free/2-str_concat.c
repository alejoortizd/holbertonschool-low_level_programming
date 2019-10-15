#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Entry Point
 * Description: function that concatenates 2 strings
 * @s1: parametre to check
 * @s2: parametre to chec
 * Return: ptr or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, c1, c2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = malloc((sizeof(char) * i + sizeof(char) * j) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (c1 = 0; c1 < i; c1++)
			ptr[c1] = s1[c1];
		for (c2 = 0; c2 < j; c1++, c2++)
			ptr[c1] = s2[c2];
		return (ptr);
	}
}
