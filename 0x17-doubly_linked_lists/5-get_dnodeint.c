#include "lists.h"
/**
 * get_dnodeint_at_index - entry point
 * @head: parameter to check
 * @index: parameter to check
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	if (head == NULL)
		return (NULL);
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
