#include "lists.h"
/**
 * get_nodeint_at_index - get nth node
 * @head: pointer
 * @index: int
 * Rreturn: NULL if node doesnot exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *trav = head;

	while (trav && count != index)
	{

		count++;
		trav = trav->next;
	}
	return (trav ? trav : NULL);

}
