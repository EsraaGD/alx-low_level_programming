#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: is the hash table
 *
 * Return: Print hash table
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;

    hash_node_t *tmp;
    char flag = 0; /* 0 while no data has been printed yet */

    if (ht == NULL || ht->array == NULL)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        tmp = ht->array[i];
        while (tmp != NULL)
        {
            if (flag == 1)
                printf(", ");
            printf("'%s': '%s'", tmp->key, tmp->value);
            flag = 1;
            tmp = tmp->next;
        }
    }
    printf("}\n");
}