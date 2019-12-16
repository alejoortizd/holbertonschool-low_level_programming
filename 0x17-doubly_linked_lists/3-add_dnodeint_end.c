#include "lists.h"
/**
 * add_dnodeint_end - entry point
 * @head: parametre to check
 * @n: parametre to check
 * Return: head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	} else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
	}
	return (new);
}
