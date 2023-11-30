#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht:
 * @key:
 * @value:
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    if (ht == NULL || key == NULL || *key == '\0')
        return 0;

    unsigned long int index = key_index((unsigned char *)key, ht->size);
    hash_node_t *new_node = malloc(sizeof(hash_node_t));

    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return 0;
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    /* Handle collision by adding the new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}