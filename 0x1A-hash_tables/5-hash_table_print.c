#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 *
 * Return: Print hash table
 */

void hash_table_print(const hash_table_t *ht);
{
    if (ht == NULL)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
            ;

        while (current != NULL)
        {
            printf("'%s': '%s'", current->key, current->value);
            current = current->next;

            if (current != NULL)
                printf(", ");
        }
    }
    printf("}\n");
}