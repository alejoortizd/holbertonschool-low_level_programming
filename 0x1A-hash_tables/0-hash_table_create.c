#include "hash_fun.h"
/**
 * hash_table_create - Entry Point
 * @size: parameter to check
 * Return: n_hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_hash_table;
	unsigned long int i;

	n_hash_table = malloc(sizeof(hash_table_t));
	if (n_hash_table == NULL)
		return (NULL);
	n_hash_table->size = size;
	n_hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (n_hash_table->array == NULL)
	{
		free(n_hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		n_hash_table->array[i] = NULL;
	return (n_hash_table);
}
