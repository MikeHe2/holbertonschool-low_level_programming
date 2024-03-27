#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a lits_t list.
 *
 * @head: Head of the linked list.
 * @str: String
 *
 * Return: The address of the new elemnt, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)

{
	int i = 0;
	int count = 0;
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
