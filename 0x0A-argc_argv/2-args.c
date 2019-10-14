#include <stdio.h>

/**
 * main - Entry Point
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for ( ;i != argc; i++)
		printf("%s\n", argv[i++]);
	return (0);
}
