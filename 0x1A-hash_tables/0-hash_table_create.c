#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with the specified size
 * @size: The size of the array to be created for the hash table
 * Return: A pointer to the newly created hash table,
 * or NULL if the creation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;
hash_node_t **new_array;
unsigned long int i;

if (size == 0)
return (NULL);

new_array = malloc(sizeof(hash_node_t *) * size);
if (!new_array)

return (NULL);

for (i = 0; i < size; i++)
new_array[i] = NULL;

new_table = malloc(sizeof(hash_table_t));
if (!new_table)

return (NULL);

new_table->size = size;
new_table->array = new_array;

return (new_table);
}
