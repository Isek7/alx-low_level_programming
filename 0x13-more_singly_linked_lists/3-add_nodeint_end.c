#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list.
 * @head: head of a list
 * @n: n element
 * Return: address of the new element, or NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ben;
	listint_t *temp;

	(void)temp;

	ben = malloc(sizeof(listint_t));

	if (ben == NULL)
		return (NULL);

	ben->n = n;
	ben->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = ben;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ben;
	}

	return (*head);
}
