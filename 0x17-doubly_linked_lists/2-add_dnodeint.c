#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: Pointer to the pointer to the head of the list
 * @n: data for the node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create a new node */
	dlistint_t *new;
	/* allocate memory */
	new = malloc(sizeof(dlistint_t));
	/* check if allocation failed then*/
	if (new == NULL)
	{
		/* return NULL if it failed */
		return (NULL);
	}

	/* Assign data n to the new node */
	new->n = n;
	/* new_node.next = current (*head)->dereferencing */
	new->next = (*head);
	/* new_node.prev = NULL ; it'll be the current head */
	new->prev = NULL;
	/* If the current head is not NULL - not empty*/
	if ((*head) != NULL)
	{
		/* set its previous to the new node */
		(*head)->prev = new;
		/* update the head to point to the new node making it the new head*/
		(*head) = new;
	}
	/* the address of the new element */
	return (new);
}
