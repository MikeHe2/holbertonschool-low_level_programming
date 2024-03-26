#include "lists.h"

/**
 * list_len - Function that returns the number of
 * elements in a linked list_t list.
 *
 * @h: Singly linked list.
 *
 * Return: Number of elements in a linked list.
 */


size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
