#include "holberton.h"
/**
 * _abs - Entry point
 *
 * @i: parametre to check
 *
 * Return:  i
 */
int _abs(int i)
{
	if (i >= 0)

		return (i);

	else
	{
		i = i * -1;
		return (i);
	}
}
