#include "lists.h"

/**
 * dlistint_len - Functin that returns the number
 * of elements in a linked dlistint_t list.
 *
 * @h: Head of the list.
 *
 * Return: Number of elements.
 */

size_t dlistint_len(const dlistint_t *h)

{

	int i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
