#include "lists.h"
/**
 * add_node - To adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: The address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t r;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (r = 0; str[r]; r++)
		;

	new_node->len = r;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
