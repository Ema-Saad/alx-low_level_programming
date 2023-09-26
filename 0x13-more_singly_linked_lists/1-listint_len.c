#include "lists.h"

/**
 * listint_len - count the lenght of list
 * @h: pointer
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}
	return (count);
}
