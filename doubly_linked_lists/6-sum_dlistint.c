#include "lists.h"

/**
 * sum_dlistint - Sum of all data (n) a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * Return: the sum of all data n in the list
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;/*initialise variable sum pour stock la somme*/

	while (head != NULL)/* tant que le pointeur head est pas NULL*/
	{
		sum += head->n;/*ajout la v du champ n du noeud a la variable sum*/
		head = head->next;/*avance noeud suivant ds liste*/
	}
	return (sum);/*ret somme des donnes apres avoir parcouru ts les noeuds*/
}
