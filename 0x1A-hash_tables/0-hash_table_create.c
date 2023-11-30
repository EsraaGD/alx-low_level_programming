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
    unsigned long int h

        if (htc == NULL) return (NULL);

    htc->size = size;
    htc->array = malloc(size * sizeof(hash_node_t *));

    if (htc->array == NULL)
        return (NULL);

    for (int h = 0; h < size; h++)
        htc->array[h] = NULL;

    return (htc);
}