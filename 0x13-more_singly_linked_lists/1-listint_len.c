#include "lists.h"

/**
 * listint_len - This counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t mycount = 0;

	while (cursor != NULL)
	{
		mycount += 1;
		cursor = cursor->next;
	}
	return (mycount);
}
