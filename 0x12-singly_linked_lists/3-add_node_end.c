#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a new list
 * @head: Address of head
 * @str: Data to be added in new node
 * Return: Address of new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count;
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	return (0);

	temp->str = strdup(str);

	for (count = 0; str[count]; count++)
	;

	temp->len = count;
	temp->next = NULL;
	ptr = *head;

	if (ptr == NULL)
	{
	*head = temp;
	}
	else
	{
	while (ptr->next != NULL)

	ptr = ptr->next;
	ptr->next = temp;
	}

	return (*head);
}

