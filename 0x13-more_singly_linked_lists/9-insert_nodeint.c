#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node(ben)
 * at a given position.
 * @head: head of a list
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ben;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	ben = malloc(sizeof(listint_t));
	if (ben == NULL)
		return (NULL);

	ben->n = n;

	if (idx == 0)
	{
		ben->next = *head;
		*head = ben;
	}
	else
	{
		ben->next = h->next;
		h->next = ben;
	}

	return (ben);
}
