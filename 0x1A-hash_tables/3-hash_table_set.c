#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the the key/value to
 * @key: the key to hash table
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *table, *h;

	if (!ht || !key || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	h = ht->array[idx];

	while (h)
	{
		if (strcmp(h->key, key) == 0)
		{
			free(h->value);
			h->value = strdup(value);
			return (1);
		}
		h = h->next;
	}

	table = malloc(sizeof(*table));
	if (!table)
	{
		free(table);
		return (0);
	}
	table->key = strdup(key);
	table->value = strdup(value);
	table->next = ht->array[idx];
	ht->array[idx] = table;

	return (1);
}
