#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer
 * @idx: index
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int count;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	trav = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (count = 0; trav && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = trav->next;
			trav->next = new;
			return (new);
		}
		else
			trav = trav->next;
	}

	return (NULL);

}
