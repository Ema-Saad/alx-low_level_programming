#include "lists.h"
/**
 * sum_listint - sum of all nodes
 * @head: pointer
 * Return: sum or 0 is list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *trav = head;

	while (trav)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
