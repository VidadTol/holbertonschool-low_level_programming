#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @str: String to duplicate and add to the new node
 * @head: Pointer to the pointer of the head of the list
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node  = NULL; /*initialisation du nouveau noeud*/
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));/*alloc.. memoire pour le nouveau noeud*/
	if (new_node == NULL)
	{
		return (NULL);/* retourne nul si l'allocation échoue*/
	}
	/* duplication de la chaine de str*/
	/* et affecte le pointeur str du nouv noeud a cette copie*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	/* mise a jour des pointeurs*/
	/* le pointeur next du nouv noeud pointe vers l'actuelle tete de liste *head*/
	new_node->next = *head;
	/* maj de tete de liste *head pour qu'elle pointe vers le nouv noeud*/
	*head = new_node;
	/* retour du nouveau noeud*/
	return (new_node);
}
