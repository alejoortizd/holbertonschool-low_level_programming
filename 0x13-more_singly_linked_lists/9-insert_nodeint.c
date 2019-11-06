#include "lists.h"
/**
 * insert_nodeint_at_index - entry point
 * @head: parameter to check
 * @idx: parameter to check
 * @n: parameter to check
 * Return: number of nodes
 */
{
	listint_t *new, *headcopy;
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
