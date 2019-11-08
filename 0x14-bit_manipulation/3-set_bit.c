#include "holberton.h"
/**
 * set_bit - Entry point
 * @n: parameter to check
 * @index: parameter to check
 * Return: 1,-1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index > 63)
		return (-1);
	*n = *n + mask;
	return (1);
}
