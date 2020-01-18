#include "hash_tables.h"
/**
 * hash_djb2 - Entry Point
 * @str: parameter to check
 * Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}