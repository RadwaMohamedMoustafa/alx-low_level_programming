#include "lists.h"

/**
 * print_listint - prints a list
 * @h: The start of the list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	n++;
	}

	return (n);
}
