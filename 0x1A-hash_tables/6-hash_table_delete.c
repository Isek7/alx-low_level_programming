#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to be deleted
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		hash_node_t *map = ht->array[i], *tmp;

		if (!map)
		{
			i += 1;
			continue;
		}

		while (map)
		{
			tmp = map->next;

			if (map->key)
				free(map->key);
			if (map->value)
				free(map->value);
			if (map)
				free(map);
			map = tmp;
		}

		i += 1;
	}

	free(ht->array);
	free(ht);
}
