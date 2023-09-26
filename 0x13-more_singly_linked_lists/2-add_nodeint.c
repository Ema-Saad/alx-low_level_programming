#include "lists.h"

/**
 * add_nodeint - add node to the start of list
 * @head: head pointer
 * @n :integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	new_node->next = *head;

	if (new_node == NULL)
		return (NULL);
	else
		return (new_node);
}
