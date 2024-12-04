#include "lists.h"

/**
 * get_dnodeint_at_index - that ret the nth node of a dlistint_t linked list
 * @index: index of the node
 * @head: pointer to the head of the list
 * Return: address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;/*initialise count pour suivre la position*/

	while (head != NULL)/*tant que le pointeur n est pas Null*/
	{
		if (index == count)/* verifie si l index correspond au compteur actuel*/
		{
			return (head);/*si oui ret le noeuud actuel*/
		}
		count++;
		head = head->next;/*avance au noeud suivant dans la liste*/
	}
	return (NULL);/*boucle se termine ss trouv le noeud a index donné ret Null*/
}
