#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for,
 * or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node = head;
while (node != NULL && i < index)
{
node = node->next;
i++;
}
return (node);
}
