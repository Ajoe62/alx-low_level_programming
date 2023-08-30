#include "lists.h"

/**
 * print_listint - This prints all the elements of a linked list
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t mycount = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		mycount += 1;
		cursor = cursor->next;
	}
	return (mycount);
}
