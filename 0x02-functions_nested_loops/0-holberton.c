#include "holberton.h"

int main(void)
{
	char h[] = "Holberton";
	int c = sizeof(h);
	int i = 0;

	for ( ; i < c; i++)
		_putchar(h[i]);
	_putchar('\n');
return (0);
}
