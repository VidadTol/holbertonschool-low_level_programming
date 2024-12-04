#include "lists.h"

/**
 * add_dnodeint - that adds a new node at the beginning of a dlistint_t list.
 * @n: data to copy
 * @head: pointer to the pointer of the list
 * Return: address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;/*next du nouv noeud pointe -> l actuelle tete*/
	new_node->prev = NULL;/*nouv noeud devient le premier, donc prev est NULL*/

	if (*head != NULL)
	{
		(*head)->prev = new_node;/*maj pointeur prev de l ancienne tete*/
	}
	*head = new_node;/*maj tete de liste pour qu'elle pointe vers nouv noeud*/

	return (new_node);
}
