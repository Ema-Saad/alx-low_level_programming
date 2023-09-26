#include "lists.h"

/**
 * free_listint - deletelist
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *trav = head;

	while (trav)
	{
		trav = trav->next;
		free(head);
		head = trav;
	}

}
