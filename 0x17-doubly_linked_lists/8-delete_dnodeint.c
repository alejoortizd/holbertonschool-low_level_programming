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
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = headcopy;
		*head = new;
		return (new);
	}

	for (i = 0; (i < idx - 1); i++)
	{
		if (headcopy == NULL)
		{
			free(new);
			return (NULL);
		}
		headcopy = headcopy->next;
	}
	new->next = headcopy->next;
	headcopy->next = new;
	return (new);
}
