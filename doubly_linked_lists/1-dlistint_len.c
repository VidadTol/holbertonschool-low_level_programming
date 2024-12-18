#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 * @h: pointer to the first node in the list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
