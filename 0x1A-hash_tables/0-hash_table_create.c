#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size:size of array
 *
 * Return: ptr to new hash table or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *htc = malloc(sizeof(hash_table_t));

    if (htc == NULL)
        return (NULL);

    htc->size = size;
    htc->array = malloc(size * sizeof(hash_node_t *));

    if (htc->array == NULL)
        return (NULL);

    for (unsigned long int i = 0; i < size; i++)
        htc->array[i] = NULL;

    return (htc);
}