#include "lists.h"
/**
 * free_listint2 - To free the linked list
 * @head : The pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
head = NULL;
}
