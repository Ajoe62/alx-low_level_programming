#include "lists.h"

/**
 * add_nodeint_end - This adds a node to end of a linked list
 * @head: The pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *arrow = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (arrow != NULL)
	{
		while (arrow->next != NULL)
			arrow = arrow->next;
		arrow->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
