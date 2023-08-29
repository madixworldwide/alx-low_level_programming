#include "lists.h"

/**
 * print_listint - Print all of the elements of a linked list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: Numbers the of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

