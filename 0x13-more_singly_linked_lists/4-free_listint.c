#include "lists.h"
/**
 * free_listint - entry point
 * @head: parametre to check
 * Return: number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
	free(head);
}
