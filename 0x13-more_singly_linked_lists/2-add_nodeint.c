#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 *
 * @head: Pointer to the first node in the list
 *
 * @n: Data to insert in that new node
 *
 * Return: The pointer to the new node or NULL if it fail
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

