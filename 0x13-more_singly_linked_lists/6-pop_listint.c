#include "lists.h"
/**
 * pop_listint - entry point
 * @head: parametre to check
 * Return: number of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (n);

}
