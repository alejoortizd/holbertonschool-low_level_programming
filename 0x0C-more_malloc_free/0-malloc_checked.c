#include "holberton.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (b == NULL)
		exit(98);
	return(c);
}
