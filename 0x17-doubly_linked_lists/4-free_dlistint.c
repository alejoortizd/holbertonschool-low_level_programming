#include "lists.h"
/**
 * free_dlistint - entry point
 * @head: parametre to check
 * Return: function that free a dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
