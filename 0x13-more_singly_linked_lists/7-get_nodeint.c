#include "lists.h"
/**
 * get_nodeint_at_index - entry point
 * @head: parameter to check
 * @index: parameter to check
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t;
	unsigned int i = 0;

	t = head;
	if (head == NULL)
		return (NULL);
	while (i < index && t != NULL)
	{
		t = t->next;
		i++;
	}
		return (t);
}
