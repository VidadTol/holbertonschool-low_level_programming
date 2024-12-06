#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1); /*Verfie si la liste est vide*/

	/*suppression du 1er noeud*/
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
		{
			node->next->prev = NULL;
		}
		free(node);
		return (1);
	}
	/*parcourt la liste -> l index souhaite*/
	while (i < index)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
		i++;
	}
	node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
