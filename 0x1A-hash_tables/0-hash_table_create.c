#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: input
 * Return: NULL or hqsh tqble
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_t = NULL;
if (size == 0)
return (NULL);
hash_t = malloc(sizeof(*hash_t));
if (hash_t == NULL)
return (NULL);
hash_t->size  = size;
hash_t->array = malloc(size * sizeof(hash_node_t *));
if (hash_t->array == NULL)
{
free(hash_t);
return (NULL);
}
return (hash_t);
}
