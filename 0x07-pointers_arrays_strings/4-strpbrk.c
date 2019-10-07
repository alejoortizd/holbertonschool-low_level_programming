#include "holberton.h"
/**
 * _strpbrk - Entry point
 * Description: Function that return the length
 * @s: parametre to check
 * @accept: parametre to check
 * Return: unsigned
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j = 0;

	for (i = 0 ; s[0] ; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s +1);
	}
	return (0);
}
