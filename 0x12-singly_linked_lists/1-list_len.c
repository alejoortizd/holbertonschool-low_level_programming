#include "lists.h"
/**
 * list_len - Entry Point
 * Description: Function that returns the number of elements in a linked list
 * @h: Parametre to check
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
