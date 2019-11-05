#include "lists.h"
/**
 * add_nodeint - entry point
 * @head: parametre to check
 * @n: parametre to check
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	t->n = n;
	t->next = *head;
	*head = t;
	return (t);
}
