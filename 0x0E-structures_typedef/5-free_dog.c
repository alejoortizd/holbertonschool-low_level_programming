#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Entry Point
 * @d: parametre to check
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
