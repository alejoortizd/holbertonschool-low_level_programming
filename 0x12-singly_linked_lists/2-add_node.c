#include "lists.h"
/**
 * add_node - Entry Point
 * Description: Function that add a new node
 * @head: Parameter to check
 * @str: parameter to check
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	unsigned int i = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	t->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	t->next = *head;
	t->len = i;
	*head = t;
	return (t);
}
