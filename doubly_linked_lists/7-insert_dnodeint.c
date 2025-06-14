#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Pointer to the head of the doubly linked list.
* @idx: Index where the new node should be added. Index starts at 0.
* @n: Data to be added in the new node.
*
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *create_new_node(int n);
dlistint_t *insert_at_head(dlistint_t **h, dlistint_t *new_node);
dlistint_t *insert_at_index(dlistint_t **h, unsigned int idx,
dlistint_t *new_node);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;

if (!h)
return (NULL);

new_node = create_new_node(n);
if (!new_node)
{
return (NULL);
}

if (idx == 0)
return (insert_at_head(h, new_node));

return (insert_at_index(h, idx, new_node));
}

dlistint_t *create_new_node(int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

return (new_node);
}

dlistint_t *insert_at_head(dlistint_t **h, dlistint_t *new_node)
{
new_node->prev = NULL;
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;

return (new_node);
}

dlistint_t *insert_at_index(dlistint_t **h, unsigned int idx,
dlistint_t *new_node)
{
dlistint_t *current = *h;
unsigned int i = 0;

while (current && i < idx - 1)
{
current = current->next;
i++;
}

if (!current || (current->next == NULL && i < idx - 1))
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
new_node->prev = current;

if (current->next)
current->next->prev = new_node;

current->next = new_node;

return (new_node);
}
