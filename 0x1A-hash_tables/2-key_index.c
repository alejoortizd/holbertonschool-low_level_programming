#include "hash_tables.h"
/**
 * key_index - Entry Point
 * @size: parameter to check
 * @key: parameter to check
 * Return: the key of index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
