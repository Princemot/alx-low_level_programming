#include "lists.h"

/**
 * add_nodeint - adds a new node on the linked list beggnning
 * @head: points to the first point on the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 * this is the solution to the question two
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

return (new);
}
