#include "lists.h"
/**
 * add_node_end - Entry Point
 * Description: Function that add a new node
 * @head: Parameter to check
 * @str: parameter to check
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t, *copy;
	size_t i = 0;

	copy = *head;
	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->str = strdup(str);
	if (t->str == NULL)
	{
		free(t);
		return (NULL);
	}
	while (t->str[i] != '\0')
		i++;
	t->len = i;
	if (*head == NULL)
	{
		t->next = *head;
		*head = t;
	} else
	{
		while (copy->next != NULL)
			copy = copy->next;
		t->next = (copy)->next;
		(copy)->next = t;
	}
	return (*head);
}
