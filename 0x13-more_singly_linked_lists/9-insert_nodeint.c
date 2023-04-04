#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position in a linked list
 * @head: double pointer to the first node of the linked list
 * @idx: index where the new node is to be inserted
 * @n: integer data to be inserted in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node, *temp;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
temp = *head;
while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}
if (!temp)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
