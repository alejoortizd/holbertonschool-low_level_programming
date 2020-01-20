#include "hash_tables.h"
/**
 * hash_table_delete - Entry Point
 * @ht: parameter to check
 * Return: the table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size ; i++)
	{
		while (ht->array != NULL)
		{
			n_node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array);
			ht->array[i] = n_node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
