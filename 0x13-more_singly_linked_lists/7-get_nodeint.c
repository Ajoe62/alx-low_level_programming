#include "lists.h"
/**
 * get_nodeint_at_index - To finds a given node in a linked list
 * @head : pointer to the head of the linked list
 * @index: index of the node to find (indices starting at 0)
 * Return: pointer to the desired node,
 *         or NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t d;

for (d = 0; (d < index) && (head->next); d++)
head = head->next;

if (d < index)
return (NULL);

return (head);
}
