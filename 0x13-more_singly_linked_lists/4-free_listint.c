#include "lists.h"

/**
 * free_listint - Frees a linked lists.
 *
 * @head: listint_t list to be the freed
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
