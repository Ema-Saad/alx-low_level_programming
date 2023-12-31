#include "lists.h"
/**
 * add_nodeint_end - add node at end
 * @head: pointer
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;


	return (new);

}
