#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: pointer to the head of a list.
 * @n: n element.
 *
 * Return: address of the new element. Return NUll if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	(void)temp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (*head);
}
