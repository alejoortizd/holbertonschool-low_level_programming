#include "lists.h"
/**
 * free_listint2 - entry point
 * @head: parametre to check
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		t = *head;
		*head = (*(*head)).next;
		free(t);
	}
	free(*head);
}
