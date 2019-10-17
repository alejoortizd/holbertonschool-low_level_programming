#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry Point
 * Description: function that return a void
 * @b: parametre to check
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
