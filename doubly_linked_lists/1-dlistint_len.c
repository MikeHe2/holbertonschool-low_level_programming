#include "lists.h"

/**
 * dlistint_len - 
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
