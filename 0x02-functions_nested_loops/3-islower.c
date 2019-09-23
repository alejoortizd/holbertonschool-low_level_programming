#include "holberton.h"
#include <ctype.h>
/**
 * main - check the code for Holberton School students.
 *
 * @c: parametre to check!
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
