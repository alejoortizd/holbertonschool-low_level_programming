#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Entry Point
 * Description: function that duplicate a string
 * @str: parametre to check
 * Return: a value
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *p2;

	if (str == NULL)
		return (NULL);
	for ( ; str[i] != 0; i++)
		;
	p2 = malloc(sizeof(char) * i);
	if (p2 == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		p2[j] = str[j];
	return (p2);
}
