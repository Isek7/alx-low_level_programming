#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list.
 * @head: head of a list
 * @n: n element
 * Return: address of the new element, or NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ben;

	ben = malloc(sizeof(listint_t));

	if (ben == NULL)
		return (NULL);

	ben->n = n;
	ben->next = *head;
	*head = ben;

	return (*head);
}
