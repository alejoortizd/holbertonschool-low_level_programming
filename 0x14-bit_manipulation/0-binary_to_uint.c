#include "holberton.h"
/**
 * binary_to_uint - Entry Point
 * @b: parameter to check
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, n = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for ( ; i > 0; i--)
	{
		sum = sum + ((b[i - 1] - 48) * n);
		n = n * 2;
	}
	return (sum);
}
