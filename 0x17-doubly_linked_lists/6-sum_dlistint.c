#include "lists.h"

/**
 * sum_dlistint - sum of all the n in dlistint_t list
 * @head: The head of list
 * Return: The sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
