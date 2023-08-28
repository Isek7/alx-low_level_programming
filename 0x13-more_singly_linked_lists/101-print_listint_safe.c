#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *isek;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((isek = curr) != NULL)
		{
			curr = curr->next;
			free(isek);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *temp, *new, *add;

	temp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = temp;
		temp = new;

		add = temp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&temp);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&temp);
	return (nnodes);
}
