#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table
 * @ht: table to search
 * @key: The key used to find the associated value
 * Return: The associated value, or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

unsigned long int index;
hash_node_t *current;

if (!ht || !(ht->array))
return (NULL);

if (!key || key[0] == '\0')
return (NULL);

index = key_index((unsigned char *)key, ht->size);
current = ht->array[index];
while (current)
{
	if (strcmp(current->key, key) == 0)
		return (current->value);
	current = current->next;
}

return (NULL);
}
