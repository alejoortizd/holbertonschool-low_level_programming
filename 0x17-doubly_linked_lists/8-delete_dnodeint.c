#include "lists.h"
/**
 * insert_dnodeint_at_index - entry point
 * @head: parameter to check
 * @idx: parameter to check
 * Return: list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *headcopy;
	unsigned int i;

	headcopy = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		new->next = headcopy;
		*head = new;
		return (1);
	}

	for (i = 0; (i < index - 1); i++)
	{
		if (headcopy == NULL)
		{
			free(new);
			return (-1);
		}
		headcopy = headcopy->next;
	}
	new->next = headcopy->next;
	headcopy->next = new;
	return (1);
}
