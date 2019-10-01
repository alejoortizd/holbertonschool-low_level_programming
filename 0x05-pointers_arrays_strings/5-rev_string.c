#include "holberton.h"
/**
 * rev_string - Entry point
 * Description: function that prints Holberton and notrebloH
 * @s: parametre to check
 * Return: always a void
 */
void rev_string(char *s)
{
	int i, temp, x;

	x = 0;

	for (i = 0; s[i] != 0; i++)
	{
	}
	i--;
	while (x < i)
	{
		temp = s[x];
		s[x] = s[i];
		s[i] = temp;
		x++;
		i--;
	}
}
