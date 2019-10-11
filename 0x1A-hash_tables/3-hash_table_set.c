#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	nsigned long int hash;
	nsigned long int index;
	if (*key == NULL)
		return (1);
	hash = hash_djb2((unsigned char *)key);
	
	if (value == NULL || value != NULL)
	{
		
	}
	return 0
}
