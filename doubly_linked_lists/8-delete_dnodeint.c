#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list.
* @head: Pointer to the head of the doubly linked list.
* @index: Index of the node to delete, starting from 0.
*
* Return: 1 if successful, -1 if it fails.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (!head || !*head)
return (-1);

/* Traverse to the node at the given index */
while (current && i < index)
{
current = current->next;
i++;
}

/* If the node doesn't exist */
if (!current)
return (-1);

/* Update links to remove the node */
if (current->prev)
current->prev->next = current->next;
else
*head = current->next;

if (current->next)
current->next->prev = current->prev;

free(current);
return (1);
}
