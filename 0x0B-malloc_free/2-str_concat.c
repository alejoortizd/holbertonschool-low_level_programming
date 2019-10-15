#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Entry Point
 * Description: function that concatenates 2 strings
 * @s1: parametre to check
 * @s2: parametre to chec
 * Return: ptr or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
