#include "hash_tables.h"

/**
 * hash_djb2 - The djb2 algorithm being represented by the Hash function.
 * @str: hash represented by the string.
 *
 * Return: The hash which has been calculated
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}
