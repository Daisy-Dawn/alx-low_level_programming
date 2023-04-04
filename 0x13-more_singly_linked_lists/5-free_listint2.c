#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: Pointer to the head of a list.
 *
 * Return: Null.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *freed;

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

