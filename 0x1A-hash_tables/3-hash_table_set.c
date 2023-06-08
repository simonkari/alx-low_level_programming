#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: The target hash table to which the key-value pair
 * will be added or updated.
 * @key: The key string used for value lookup. It cannot be
 * an empty string.
 * @value: The value associated with the key. It can be an empty string.
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

unsigned long int index;
hash_node_t *new, *temp;
char *key_copy, *value_copy;

if (!ht || !(ht->array) || key[0] == '\0' || key == NULL)
	return (0);

value_copy = strdup(value);
if (!value_copy)
	return (0);

index = key_index((unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp)
{
	if (strcmp(temp->key, key) == 0)
	{
		free(temp->value);
		temp->value = value_copy;

		return (1);
	}
	temp = temp->next;
}

key_copy = strdup(key);
if (!key_copy)
	return (0);

new = malloc(sizeof(hash_node_t));
if (!new)

	return (0);
new->key = key_copy;
new->value = value_copy;
new->next = ht->array[index];
ht->array[index] = new;

return (1);
}
