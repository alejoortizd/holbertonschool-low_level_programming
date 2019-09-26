#include "holberton.h"
/**
 * _isdigit - check is c is a digit
 *
 * Description: function that return 1 is c a digiti
 *
 * @c: parametre to check
 *
 * Return: always 1 is c is a digit if not 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
