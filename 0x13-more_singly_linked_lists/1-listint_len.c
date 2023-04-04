#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the head of a list.
 *
 * Return: numbers of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);
}
