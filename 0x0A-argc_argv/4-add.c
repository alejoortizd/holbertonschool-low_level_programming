#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isnumber - Entry Point
 *
 * @number: parametre to check
 * Return: 1 if number else 0
 */
int isnumber(char *number)
{
	int i;

	i = 0;
	for ( ;number[i] != '\0'; i++)
	{
		if (isdigit(number[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - Entry Point
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int j, i;

	j = 0;
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	i = 1;
	for ( ;i < argc; i++)
	{
		if (isnumber(argv[i]))
		{
			j += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
