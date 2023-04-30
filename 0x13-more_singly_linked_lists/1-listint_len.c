#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * @h: The head of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	h = h->next;
	count++;
	}
	return (count);
}
