#include "lists.h"
/**
 * add_nodeint_end - entry point
 * @head: parametre to check
 * @n: parametre to check
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	} else
	{
		while ((*head)->prev !=NULL)
			(*head) = (*head)->prev;
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
