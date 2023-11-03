#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 *
 * @key: the key to use
 * @size: is the size of the array of the hash table
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
