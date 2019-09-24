#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * @void: parametre to check
 *
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	for ( ; a <= 23; a++)
	{
		for ( ; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
		b = 0;
	}
}
