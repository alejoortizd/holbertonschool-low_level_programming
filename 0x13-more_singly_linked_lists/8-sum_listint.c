#include "lists.h"
/**
 * sum_listint - entry point
 * @head: parameter to check
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *t;
	int sum = 0;

	t = head;
	if (head == NULL)
		return (0);
	while (t != NULL)
	{
		sum += t->n;
		t = t->next;
	}
		return (sum);
}
