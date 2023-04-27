#include "lists.h"

/**
 * print_list - Entry point
 *
 * Description: Prints all te elements of a list_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	printf("\n");
	}
	else
	{
	printf("[%d] %s", h->len, h->str);
	printf("\n");
	}
	t++;
	h = h->next;
	}

	return (t);
}
