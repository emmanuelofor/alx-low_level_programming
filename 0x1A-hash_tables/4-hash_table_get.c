#include "hash_tables.h"

/**
 * hash_table_get - a key in a hash table being 
 *                  retrieved by the value associated with it.
 * @ht: the hash table being indicated by a pointer.
 * @key: the value gotten by the key.
 *
 * Return: NULL - if the key cannot be matched.
 *         Otherwise - key in ht associated with the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
