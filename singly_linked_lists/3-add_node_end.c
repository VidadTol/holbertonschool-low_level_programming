#include "lists.h"

/**
 * add_node_end - that adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the head of the list
 * @str: string to duplicate and add to the new node
 * Return: adress of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));/*alloue la memoire nouveau noeud*/
	unsigned int len = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[len])
		len++;

	new_node->str = strdup(str);/*duplique la chaine str*/
	if (new_node->str == NULL)
	{
		free(new_node);/*libere memoire si strdup échoue*/
		return (NULL);
	}
	new_node->len = len;/*calcul long de str*/
	new_node->next = NULL;/* le nouv noeud sera le dernier donc next est NULL*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		list_t *temp = *head;/*parcourt la liste -> la fin*/

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;/* ajoute le nouveau noeud a la fin de la liste*/
	}
	return (new_node);/*retourne le nouveau noeud*/
}
