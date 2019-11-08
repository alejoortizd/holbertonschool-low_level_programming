#include "holberton.h"
/**
 * get_bit - Entry point
 * @n: parameter to check
 * @index: parameter to check
 * Return: 0,1,-1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
