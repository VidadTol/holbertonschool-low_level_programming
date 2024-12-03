#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t
 * @h: pointer to the beginning of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;/*utilisation de size_t pour le compteur*/

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);/*utilisation de %u pour usigned int*/
		}

		h = h->next;
		count++;
	}

	return (count);
}
