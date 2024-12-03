#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @str: String to duplicate and add to the new node
 * @head: Pointer to the pointer of the head of the list
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
