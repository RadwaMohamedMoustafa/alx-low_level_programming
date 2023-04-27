#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *N_node;
	size_t count;

	N_node = malloc(sizeof(list_t));

	if (N_node == NULL)
	return (NULL);


	N_node->str = strdup(str);

	for (count = 0; str[count]; count++)
	;

	N_node->len = count;
	N_node->next = *head;
	*head = N_node;

	return (*head);

}
