#include "holberton.h"
/**
 * more_numbers - Function that print a table
 * Description: printo 0 to 9 and also a % from 0 to 9
 * Return: a void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for ( ; i <= 9; i++)
	{
		for ( ; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		j = 0;
		_putchar('\n');
	}
}
