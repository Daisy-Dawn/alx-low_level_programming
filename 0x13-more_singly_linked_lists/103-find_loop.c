#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of a list.
 *
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *prev;

	p = head;
	prev = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = prev;
			prev =  p;
			while (1)
			{
				p = prev;
				while (p->next != head && p->next != prev)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}
