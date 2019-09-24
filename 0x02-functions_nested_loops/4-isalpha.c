#include "holberton.h"
/**
 * _isalpha - check the code for alphabets characters.
 *
 * @c: is a parametre to check
 *
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
