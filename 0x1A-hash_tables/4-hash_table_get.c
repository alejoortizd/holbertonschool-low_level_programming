#include "hash_tables.h"
/**
 * hash_table_get - Entry Point
 * @key: parameter to check
 * @ht: parameter to check
 * Return: the table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcpy(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
