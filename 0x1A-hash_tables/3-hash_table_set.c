#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 * Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new, *runner;
unsigned long int indx;

if (!ht || !key)
return (0);

indx = key_index((const unsigned char *)key, ht->size);

if (ht->array[indx] == NULL)
{
new = create_new(key, value);
if (!new)
return (0);
ht->array[indx] = new;
return (1);
}
runner =  ht->array[indx];
while (runner)
{
if (strcmp(key, runner->key) == 0)
{
free(runner->value);
runner->value = strdup(value);
return (1);
}
runner = runner->next;
}
new = create_new(key, value);
if (!new)
return (0);
new->next = ht->array[indx];
ht->array[indx] = new;
return (1);
}

/**
 *create_new - a function that creates a new node
 *@key: (const char) key
 *@value: (const char) value
 *
 *Return: pointer to new node or NULL
 */
hash_node_t *create_new(const char *key, const char *value)
{
hash_node_t *new;
new = malloc(sizeof(hash_node_t));
if (!new)
{
free(new);
return (NULL);
}
new->key = strdup(key);
if (!new->key)
{
free(new);
return (NULL);
}
new->value = strdup(value);
if (!new->value)
{
free(new);
return (NULL);
}
new->next = NULL;
return (new);
}
