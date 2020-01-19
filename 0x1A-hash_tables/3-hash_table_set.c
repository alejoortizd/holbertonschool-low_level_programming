#include "hash_tables.h"
/**
 * create_node - Entry Point
 * @key: parameter to check
 * @value: parameter to check
 * Return: the new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
/**
 * hash_table_set - Entry Point
 * @ht: parameter to check
 * @key: parameter to check
 * @value: parameter to check
 * Return: add element to the hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *tmp;
	char *nvalue;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			nvalue = strdup(value);
			if (nvalue == NULL)
				return (0);
			free(tmp->value);
			tmp->value = nvalue;
			return (1);
		}
		tmp = tmp->next;
	}
	node = create_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
