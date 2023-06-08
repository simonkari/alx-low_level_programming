#include "hash_tables.h"

/**
 * key_index - Calculates the index in a hash table where
 * a key-value pair should be stored
 * @key: the key string to be hashed
 * @size: The size of the array of nodes in the hash table.
 * Return: The index in the array where the key and value
 * should be stored, or -1 on failure.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

if (size == 0)
return (-1);
if (!key)
return (-1);

index = hash_djb2(key) % size;

return (index);
}
