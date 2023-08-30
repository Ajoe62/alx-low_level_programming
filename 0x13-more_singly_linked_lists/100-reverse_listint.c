#include "lists.h"

/**
 * reverse_listint - This reverses a linked list.
 * @head: head of a list.
 *
 * Return: The pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *point;
	listint_t *node;

	point = NULL;
	node = NULL;

	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = point;
		point = *head;
		*head = node;
	}

	*head = point;
	return (*head);
}
