#include "holberton.h"
/**
 * flip_bits - Entry point
 * @n: parameter to check
 * @m: parameter to check
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	if (!(n == m))
	{
		while (!(n == m))
		{
			if (n == 0 && m == 0)
				break;

			if (!((n & 1) == (m & 1)))
				i += 1;
			n = n >> 1;
			m = m >> 1;
		}
	}
	return (i);
}
