#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list.
 * @head: head of a list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *isek;

	if (*head == NULL)
		return (0);

	isek = *head;

	hnode = isek->n;

	h = isek->next;

	free(isek);

	*head = h;

	return (hnode);
}
