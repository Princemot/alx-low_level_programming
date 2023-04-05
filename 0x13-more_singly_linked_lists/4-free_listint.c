#include "lists.h"

/**
 * free_listint - responsible to free a list
 * @head: listint_t list to be freed from a list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
