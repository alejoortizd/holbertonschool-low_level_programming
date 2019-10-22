#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - Entry Point
 * @name: Parametre to check
 * @age: Parametre to check
 * @owner: Parametre to check
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(dog_h));
	if (newd == NULL)
		return (NULL);
	newd->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (newd == NULL)
		return (NULL);
	newd->name = _strcpy(newd->name, name);
	newd->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	newd->owner = _strcpy(nd->owner, owner);
	newd->age = age;
	return (newd);
}
/**
 * _strlen - check code
 * @s: pointer to check.
 * Return: the lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * *_strcpy - Entry point
 * @src: pointer to check.
 * @dest: pointer to check
 * Return: value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = src[i + 1];
	}
	return (dest);
}
