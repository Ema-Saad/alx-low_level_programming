#include "lists.h"
/**
 * pop_listint - pop head of list
 * @head: pointer
 * Return: 0 if list is empty,else node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *trav;
	int value;

	if (*head == NULL || head == NULL)
		return (0);
	value = (*head)->n;

	trav = (*head)->next;

	free(*head);
	*head = trav;

	return (value);
}
