#include "hash_tables.h"
/**
 * hash_table_get - Entry Point
 * @key: parameter to check
 * @ht: parameter to check
 * Return: the table
 */
void hash_table_print(const hash_table_t *ht);
{
    unsigned long int i;
    hash_node_t *tmp;
    char sentinel = 0;

    if (ht = NULL || ht->array == NULL)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        tmp = ht->array[i];
        while (tmp != NULL)
        {
            if (sentinel == 1)
                printf(", ");
            printf("'%s': '%s'", tmp->key, tmp->value);
            flag = 1;
            tmp = tmp->next;
        }
    }
    printf("}\n");
}
