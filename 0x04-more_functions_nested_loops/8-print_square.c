#include "holberton.h"
/**
 * print_square - entry point
 * Description: function that print a square
 * @size: parametre to check
 * Return: void
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for ( ; i < size; i++)
		{
			for ( ; j < size; j++)
				_putchar('#');
			_putchar('\n');
			j = 0;
		}
	}
	else
		_putchar('\n');
}
