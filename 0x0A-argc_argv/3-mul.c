#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int results;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	results = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", results);
	return (0);
}
