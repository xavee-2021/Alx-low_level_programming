#include <stdio.h>
#include "lists.h"
/**
 * print_listint-prints all the elements of a listint_t list.
 * @h: list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
