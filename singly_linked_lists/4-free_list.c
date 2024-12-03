#include"lists.h"

/**
 * free_list - Frees a list_t
 * @head: Pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)/* parcourt la liste et libere chaque noeud*/
	{
		temp = head;/*Sauvegarde le pointeur actuel*/
		head = head->next;/*avance a l'element suivant de la liste*/
		free(temp->str);/*libere chaque chaine dupliquée*/
		free(temp);/*lebere la memoire allouée pour  le noeud lui-meme*/
	}
}
