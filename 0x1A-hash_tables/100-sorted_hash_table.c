#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (!ht)
        return NULL;

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (!ht->array)
    {
        free(ht);
        return NULL;
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *node;
    unsigned long int index;

    if (!ht || !key || strcmp(key, "") == 0 || !value)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);

    node = ht->array[index];
    while (node)
    {
        if (strcmp(key, node->key) == 0)
        {
            free(node->value);
            node->value = strdup(value);
            return 1;
        }
        node = node->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    new_node->sprev = NULL;
    new_node->snext = NULL;
    ht->array[index] = new_node;

    if (!ht->shead)
    {
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else
    {
        node = ht->shead;
        while (node && strcmp(key, node->key) > 0)
            node = node->snext;

        if (!node)
        {
            new_node->sprev = ht->stail;
            ht->stail->snext = new_node;
            ht->stail = new_node;
        }
        else if (node == ht->shead)
        {
            new_node->snext = ht->shead;
            ht->shead->sprev = new_node;
            ht->shead = new_node;
        }
        else
        {
            new_node->sprev = node->sprev;
            new_node->snext = node;
            node->sprev->snext = new_node;
            node->sprev = new_node;
        }
    }

    return 1;
}
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long int index;

    if (!ht || !key || strcmp(key, "") == 0)
        return NULL;

    index = key_index((const unsigned char *)key, ht->size);

    node = ht->array[index];
    while (node)
    {
        if (strcmp(key, node->key) == 0)
            return node->value;
        node = node->next;
    }

    return NULL;
}
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;

    if (!ht)
        return;

    printf("{");
    node = ht->shead;
    while (node)
    {
        printf("'%s': '%s'", node->key, node->value);
        if (node->snext)
            printf(", ");
        node = node->snext;
    }
    printf("}\n");
}
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;

    if (!ht)
        return;

    printf("{");
    node = ht->stail;
    while (node)
    {
        printf("'%s': '%s'", node->key, node->value);
        if (node->sprev)
            printf(", ");
        node = node->sprev;
    }
    printf("}\n");
}
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *next;
    unsigned long int i;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            next = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = next;
        }
    }

    free(ht->array);
    free(ht);
}

