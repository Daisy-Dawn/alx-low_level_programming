#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head of a list.
 *
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *freed;

	if (*head == NULL)
		return (0);

	freed = *head;

	h_node = freed->n;

	h = freed->next;

	free(freed);

	*head = h;

	return (h_node);
}
