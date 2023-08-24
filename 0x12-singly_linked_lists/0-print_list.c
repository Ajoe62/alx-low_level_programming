#include "lists.h"
/**
 * print_list - This prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: The number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t check;

	check = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		check++;
	}
	return (check);
}
