#include "holberton.h"
/**
 * print_triangle - entry point
 * Description: function that prints a triangle
 * @size: parametre to check
 * Return: Void
 */
void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for ( ; i < size; i++)
		{
			for ( ; j < size; j++)
			{
				if (((i + j) >= (size - 1)))
					_putchar('#');
				else
					_putchar(' ');
			}
			j = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
