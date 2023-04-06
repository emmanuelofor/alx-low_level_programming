#include "hash_tables.h"

/**
 * key_index - In the array of a has table
 *             get the index at which a key pair should be stored.
 * @key: The index which will be gotten by the key.
 * @size: The hashtable being represented by size of the array.
 *
 * Return: The key's index.
 *
 * Description: the djb2 algorithm is utilized.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
