#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 *
 * @h: pointer to head of the list.
 *
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)

{

	int i = 0;

	for (; h != NULL; i++)
	{
		if (h == NULL)
		{
			return (i);
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (i);
}

