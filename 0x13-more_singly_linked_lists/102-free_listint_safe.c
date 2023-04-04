#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: pointer to the head of a list.
 *
 * Return: no return.
 */

void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *freed;

	if (head != NULL)
	{
		freed = *head;
		while ((temp = freed) != NULL)
		{
			freed = freed->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: pointer to the head of a list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t no_nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *freed;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (no_nodes);
			}
		}

		freed = *h;
		*h = (*h)->next;
		free(freed);
		no_nodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (no_nodes);
}
