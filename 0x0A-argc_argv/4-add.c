#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * isnumber - Entry Point
 * @number: number to check
 * Return: 1 if number else 0
 */
int isnumber(char *number)
{
	int i;

	i = 0;
	while (number[i] != '\0')
	{
		if (isdigit(number[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - prints number of arguments given to program
 * @argv: Parametre to check
 * @argc: Parametre to check
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r, i;

	results = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (isnumber(argv[i]))
		{
			r += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", r);
	return (0);
}
