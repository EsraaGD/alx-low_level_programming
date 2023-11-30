#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: is key
 * @size: size of array of the hash table
 *
 * Return: The index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}