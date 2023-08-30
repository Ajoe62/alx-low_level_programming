#include "lists.h"
/**
 * pop_listint - This deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *arrow;
int n;

arrow = *head;

if (arrow == NULL)
return (0);

*head = arrow->next;
n = arrow->n;
free(arrow);
return (n);
}
