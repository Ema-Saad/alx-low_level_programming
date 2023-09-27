#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav = *head;
	listint_t *curr = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(trav);
		return (1);
	}

	while (count < index - 1)
	{
		if (!trav || !(trav->next))
			return (-1);
		trav = trav->next;
		count++;
	}


	curr = trav->next;
	trav->next = curr->next;
	free(curr);

	return (1);
}

