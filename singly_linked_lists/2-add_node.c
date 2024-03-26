#include "lists.h"

/**
 * add_node - Entry Point
 * @head: input
 * @str: string
 * Return: 0
 */


list_t *add_node(list_t **head, const char *str)

{
	int i, count = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));


	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
