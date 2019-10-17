#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Entry Point
 * Description: function that allocates memory for an array
 * @nmemb: parametre to check
 * @size: parametre to check
 * Return: IDK
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		a[i] = '\0';
	return (a);
}
