#include "lists.h"

/**
 * list_len - that returns the number of elements in a linked list_t list
 * @h: pointer to the first node in the list
 * Return: the number of nodes in the list
 *
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
