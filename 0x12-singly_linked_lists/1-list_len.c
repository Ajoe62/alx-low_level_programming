#include "lists.h"
/**
 * list_len - This returns the num of elements in a list.
 * @h: The singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes_num;

	nodes_num = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
