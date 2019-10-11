#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp = tmp->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
