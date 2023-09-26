#include "lists.h"
#include <stdio.h>

/**
 *print_listint - fun to print elementsof list
 *@h: pointer to list
 *Return: num of elements
 */

size_t print_listint(const listint_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
