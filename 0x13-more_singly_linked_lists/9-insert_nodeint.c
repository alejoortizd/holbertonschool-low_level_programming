#include "lists.h"
/**
 * insert_nodeint_at_index - entry point
 * @head: parameter to check
 * @idx: parameter to check
 * @n: parameter to check
 * Return: number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t, *copy;
	unsigned int i = 0;

	copy = *head;
	t = malloc(sizeof(listint_t));
	if (t = NULL)
		return (NULL);
	t->next = n;
	if (idx == 0)
	{
		t->next = copy;
		*head = t;
		return (t);
	}
	while (i < idx - 1)
	{
		if (copy == NULL)
		{
			free(t);
			return (NULL);
		}
		t->next = copy->next;
		copy->next = t;
		return (t);
	}
}
