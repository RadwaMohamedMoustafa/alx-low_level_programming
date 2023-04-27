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
	int t = 1;
	list_t *ptr;
	if (h->str == NULL)
	{
	printf("[0] (nil)");
	}
	else
	{
	printf("[%d] %s", h->len, h->str);
	}

	printf("\n");
	ptr = h->next;

	while (ptr != NULL)
	{
	printf("[%d] %s", ptr->len, ptr->str);
	ptr = ptr->next;
	t++;
	}
	printf("\n");
	return (t);
}
