#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: Pointer to the pointer to the head of the list
 * @n: data for the node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* create a new and temporaryvnode */
	dlistint_t *new, *last = *head;
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
	/* since the new node will be the last node */
	new->next = NULL;

	/* If the list is empty*/
	if (*head == NULL)
	{
		/* make the new node the head */
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* Transverse the list to find the last node */
	while (last->next != NULL)
	{
		last = last->next;
	}
	/* connect the new node to the last node*/
	last->next = new;
	/* Set the previous pointer of the new node to the last node  */
	new->prev = last;

	return (new);
}
