#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry Point
 * @argc: parametre that count
 * @argv: parametre that is an array
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int i;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	i = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", i);
	return (0);
}
