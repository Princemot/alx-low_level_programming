#include "lists.h"

/**
 * add_nodeint_end - to add a node on the list
 * @head: points to the first element on list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 * this is the solution to the third question
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
