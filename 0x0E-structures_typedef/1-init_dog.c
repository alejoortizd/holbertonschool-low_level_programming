#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Entry Point
 * @d: variable of type struct dog
 * @name: parametre to check
 * @age: parametre to check
 * @owner: parametre to check
 * Return: dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
