#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry Point
 * Description: function that concatenated 2 strings
 * @s1: Parametre to check
 * @s2: Parametre to check
 * @n: Parametre to check
 * Return: C
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	c = malloc((sizeof(char) * i) + (sizeof(char) * (n + 1)));
	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		c[k] = s1[k];
	for (l = 0; l < n; k++, l++)
		c[k] = s2[l];
	c[k] = '\0';
	return (c);
}
