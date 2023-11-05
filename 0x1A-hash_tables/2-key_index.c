#include "hash_tables.h"



/**
 * key_index - Compute the index at which the key should
 be stored in the hash table array.
 * @key: The key string.
 * @size: The size of the array.
 *
 * Return: The index where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int h_value = hash_djb2(key);
    unsigned long int index = h_value % size;
    return (index);
}
